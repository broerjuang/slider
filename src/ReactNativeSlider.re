[@bs.module] [@react.component]
external make:
  (
    ~style: ReactNative.Style.t=?,
    ~value: int=?,
    ~step: int=?,
    ~minimumValue: int=?,
    ~maximumValue: int=?,
    ~minimumTrackTintColor: string=?,
    ~maximumTrackTintColor: string=?,
    ~disabled: bool=?,
    ~onSlidingStart: int => unit=?,
    ~onSlidingComplete: int => unit=?,
    ~onValueChange: int => unit=?,
    ~testID: string=?,
    ~children: React.element=?,
    //   IOS Props
    ~maximumTrackImage: ReactNative.Image.Source.t=?,
    ~minimumTrackImage: ReactNative.Image.Source.t=?,
    ~thumbImage: ReactNative.Image.Source.t=?,
    ~trackImage: ReactNative.Image.Source.t=?,
    ~inverted: bool=?,
    // Android
    ~thumbTintColor: string=?,
    // View Props: https://github.com/reasonml-community/reason-react-native/blob/master/reason-react-native/src/components/View.re#L14-L60
    ~accessibilityComponentType: [@bs.string] [
                                   | `none
                                   | `button
                                   | `radiobutton_checked
                                   | `radiobutton_unchecked
                                 ]
                                   =?,
    ~accessibilityElementsHidden: bool=?,
    ~accessibilityHint: string=?,
    ~accessibilityIgnoresInvertColors: bool=?,
    ~accessibilityLabel: string=?,
    ~accessibilityLiveRegion: [@bs.string] [ | `none | `polite | `assertive]=?,
    ~accessibilityRole: [@bs.string] [
                          | `none
                          | `button
                          | `link
                          | `search
                          | `image
                          | `keyboardkey
                          | `text
                          | `adjustable
                          | `header
                          | `summary
                          | `imagebutton
                        ]
                          =?,
    ~accessibilityStates: array(ReactNative.AccessibilityState.t)=?,
    ~accessibilityTraits: array(ReactNative.AccessibilityTrait.t)=?,
    ~accessibilityViewIsModal: bool=?,
    ~accessible: bool=?,
    ~collapsable: bool=?,
    ~hitSlop: ReactNative.View.edgeInsets=?,
    ~importantForAccessibility: [@bs.string] [
                                  | `auto
                                  | `yes
                                  | `no
                                  | [@bs.as "no-hide-descendants"]
                                    `noHideDescendants
                                ]
                                  =?,
    ~nativeID: string=?,
    ~needsOffscreenAlphaCompositing: bool=?,
    ~onAccessibilityEscape: unit => unit=?,
    ~onAccessibilityTap: unit => unit=?,
    ~onLayout: ReactNative.Event.layoutEvent => unit=?,
    ~onMagicTap: unit => unit=?
  ) =>
  React.element =
  "@react-native-community/slider";