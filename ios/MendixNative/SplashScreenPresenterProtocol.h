#import <Foundation/Foundation.h>

@protocol SplashScreenPresenterProtocol
@required
+ (void) show;
+ (void) hide;
- (void) showInRootView:(UIView*)rootView;
@end
