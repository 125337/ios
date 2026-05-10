#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

API_AVAILABLE(ios(11.0))
@interface WPSessionBoxController : NSObject
    <UICollectionViewDelegate,
     UICollectionViewDataSource>

@property (nonatomic, assign) BOOL isAddChatBox;
@property (nonatomic, assign) BOOL isChatBoxTop;
@property (nonatomic, assign) BOOL isManagerChatBox;
@property (nonatomic, assign) BOOL isSessionGesture;
@property (nonatomic, assign) NSInteger chatBoxTopInList;
@property (nonatomic, strong) NSMutableArray<NSString *> *filterSessionList;
@property (nonatomic, strong) UICollectionView *collectionView;
@property (nonatomic, weak) UIViewController *hostViewController;

+ (instancetype)shared;
- (void)attachToViewController:(UIViewController *)vc;
- (void)detachFromViewController;
- (void)reloadData;
- (BOOL)isContactInChatBox:(NSString *)userName;
- (void)addContactToChatBox:(NSString *)userName;
- (void)removeContactFromChatBox:(NSString *)userName;
- (NSArray *)chatBoxSessions;

- (NSString *)userNameAtIndexPath:(NSIndexPath *)indexPath inTableView:(UITableView *)tableView dataSource:(id)dataSource;
- (BOOL)isSessionTop:(NSString *)userName;
- (BOOL)isSessionMuted:(NSString *)userName;
- (void)togglePin:(NSString *)userName isTop:(BOOL)isTop;
- (void)toggleMute:(NSString *)userName isMuted:(BOOL)isMuted;
- (void)showEditRemark:(NSString *)userName;

@end
