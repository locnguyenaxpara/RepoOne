// Copyright 2019-present the Material Components for iOS authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#import "MaterialAppBar.h"
#import "MaterialContainerScheme.h"

/**
 Applies the Material Theming styles to an MDCAppBarViewController.
 */
@interface MDCAppBarViewController (MaterialTheming)

/**
 Applies the Material Theming "Primary" Top App Bar variant where the AppBar's surface is colored
 with @c primaryColor.
 */
- (void)applyPrimaryThemeWithScheme:(id<MDCContainerScheming>)containerScheme
    API_DEPRECATED(
        "🕘 Schedule time to migrate. "
        "Use branded UINavigationController instead: go/material-ios-top-app-bars/gm2-migration. "
        "This is go/material-ios-migrations#not-scriptable 🕘",
        ios(11, 12));

/**
 Applies the Material Theming "Surface" Top App Bar variant where the AppBar's surface is colored
 with @c primaryColor;
 */
- (void)applySurfaceThemeWithScheme:(id<MDCContainerScheming>)containerScheme
    API_DEPRECATED(
        "🕘 Schedule time to migrate. "
        "Use branded UINavigationController instead: go/material-ios-top-app-bars/gm2-migration. "
        "This is go/material-ios-migrations#not-scriptable 🕘",
        ios(11, 12));

@end
