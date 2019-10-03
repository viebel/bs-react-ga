[@bs.module "react-ga"] external initialize : string => unit = "initialize";
[@bs.module "react-ga"] external pageView : string => unit = "pageview";

[@bs.deriving abstract]
type eventOptions = {
  category: string,
  action: string,
  [@bs.optional]
  label: string,
  [@bs.optional]
  value: int,
  [@bs.optional]
  nonInteraction: bool,
  [@bs.optional]
  transport: string,
};

[@bs.module "react-ga"] external event: eventOptions => unit = "event";
