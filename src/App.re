open ReactNative;

let styles =
  StyleSheet.create(
    Style.{
      "container":
        style(~flex=1., ~alignItems=`center, ~justifyContent=`center, ()),
      "text": style(~fontSize=24., ()),
    },
  );

[@react.component]
let make = () =>
  <View style=styles##container>
    <Text style=styles##text>
      {React.string("Bienvenue au meetup React lillois")}
      [%raw {|' des amoureux.ses de houblon ⚛️'|}]
      [%raw {|'🍺'|}]
      <Space />
    </Text>
  </View>;