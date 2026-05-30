#import <UIKit/UIKit.h>
#import <objc/runtime.h>

NS_ASSUME_NONNULL_BEGIN

@interface CSContactInfoPopoverController : UIViewController <
    UITableViewDelegate,
    UITableViewDataSource,
    UIPopoverPresentationControllerDelegate>

- (instancetype)initWithContact:(id)contact avatar:(nullable UIImage *)avatar;

@end

NS_ASSUME_NONNULL_END