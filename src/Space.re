open ReactNative;

let styles = StyleSheet.create(Style.{"text": style(~fontSize=32., ())});
[@react.component]
let make = () =>
  <Text style=styles##text>
    [%raw {|'Coucou depuis React Native 👨‍🚀'|}]
  </Text>;