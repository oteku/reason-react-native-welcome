/**
 * @format
 */

import { AppRegistry } from 'react-native';
import { make as App } from './src/App.bs.js';
import { name as appName } from './app.json';

AppRegistry.registerComponent(appName, () => App);
