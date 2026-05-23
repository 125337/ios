#import <UIKit/UIKit.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import "../../Config/WPColors.h"

#define WPBgColor() WPBackgroundColor()
#define WPCardBg() WPCardBackgroundColor()
#define WPT1() WPTextPrimaryColor()
#define WPT2() WPTextSecondaryColor()
#define WPT3() WPTextTertiaryColor()
#define WPAccent() WPAccentColor()
#define WPSwOn() WPSwitchOnColor()
#define WPSepColor() WPSeparatorColor()

extern const CGFloat kPad;
extern const CGFloat kRadius;
extern const CGFloat kRowH;

Class WPGetBaseClass(void);
UIScrollView *WPMakeSV(UIViewController *vc);
UIView *WPMakeCard(CGFloat top, CGFloat w);
UILabel *WPMakeSectionHeader(NSString *text, CGFloat top, CGFloat w);
void WPAddSwitchRow(UIView *card, CGFloat cy, CGFloat cw, NSString *title, NSString *key, BOOL on, id target);
void WPAddNavRow(UIView *card, CGFloat cy, CGFloat cw, NSString *title, NSString *action, id target);
void WPAddSep(UIView *card, CGFloat cy, CGFloat cw);
void WPAddInfoRow(UIView *card, CGFloat cy, CGFloat cw, NSString *left, NSString *right);