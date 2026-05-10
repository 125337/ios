#import "WPSessionBoxController.h"
#import "../../Config/PluginConfig.h"
#import "../../Config/Constants.h"
#import <objc/runtime.h>
#import <objc/message.h>

static void sbLog(NSString *format, ...) {
    va_list args;
    va_start(args, format);
    NSString *content = [[NSString alloc] initWithFormat:format arguments:args];
    va_end(args);

    NSLog(@"[WeChatPlugin][SessionBox] %@", content);

    @try {
        NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
        NSString *folderPath = [paths.firstObject stringByAppendingPathComponent:@"WeChatPlugin_Logs"];
        [[NSFileManager defaultManager] createDirectoryAtPath:folderPath withIntermediateDirectories:YES attributes:nil error:nil];
        NSString *filePath = [folderPath stringByAppendingPathComponent:@"sessionbox.log"];
        NSString *line = [NSString stringWithFormat:@"[%@] %@\n", [NSDate date], content];
        NSFileHandle *handle = [NSFileHandle fileHandleForWritingAtPath:filePath];
        if (handle) {
            [handle seekToEndOfFile];
            [handle writeData:[line dataUsingEncoding:NSUTF8StringEncoding]];
            [handle closeFile];
        } else {
            [line writeToFile:filePath atomically:YES encoding:NSUTF8StringEncoding error:nil];
        }
    } @catch (NSException *e) {}
}

static NSString *const kCellReuseIdentifier = @"WPSessionBoxCell";

static id getService(Class serviceClass) {
    Class scClass = objc_getClass("MMServiceCenter");
    if (!scClass) return nil;
    SEL dcSel = NSSelectorFromString(@"defaultCenter");
    if (![scClass respondsToSelector:dcSel]) return nil;
    id center = ((id (*)(id, SEL))objc_msgSend)(scClass, dcSel);
    if (!center) return nil;
    SEL gsSel = NSSelectorFromString(@"getService:");
    if (![center respondsToSelector:gsSel]) return nil;
    return ((id (*)(id, SEL, Class))objc_msgSend)(center, gsSel, serviceClass);
}

static id getSessionMgr() {
    const char *classNames[] = {
        "MMNewSessionMgr", "CConversationMgr", "CSessionMgr",
        "MMSessionMgr", "MainSessionMgr"
    };
    for (int i = 0; i < 5; i++) {
        Class cls = objc_getClass(classNames[i]);
        if (cls) {
            id svc = getService(cls);
            if (svc) return svc;
        }
    }
    return nil;
}

static id getContactMgr() {
    Class cls = objc_getClass("CContactMgr");
    if (!cls) return nil;
    return getService(cls);
}

@implementation WPSessionBoxController

+ (instancetype)shared {
    static WPSessionBoxController *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[WPSessionBoxController alloc] init];
    });
    return instance;
}

- (instancetype)init {
    self = [super init];
    if (self) {
        _filterSessionList = [NSMutableArray array];
    }
    return self;
}

#pragma mark - Attach / Detach

- (void)attachToViewController:(UIViewController *)vc {
    @try {
        if (!vc) return;
        if (self.hostViewController == vc) return;
        if (self.hostViewController && self.hostViewController != vc) {
            [self detachFromViewController];
        }
        self.hostViewController = vc;

        PluginConfig *config = [PluginConfig shared];
        sbLog(@"[attach] config: quickPin=%d, quickRemark=%d, quickMute=%d, addChatBox=%d",
              config.quickPinEnabled, config.quickRemarkEnabled, config.quickMuteEnabled, config.addChatBoxEnabled);

        if (config.addChatBoxEnabled && config.quickPinEnabled) {
            [self setupCollectionViewInViewController:vc];
        }

        sbLog(@"[attach] ✓ complete");
    } @catch (NSException *e) {
        sbLog(@"[attach] ✗ EXCEPTION: %@ - %@", e.name, e.reason);
    }
}

- (void)detachFromViewController {
    @try {
        if (self.collectionView) {
            self.collectionView.delegate = nil;
            self.collectionView.dataSource = nil;
            [self.collectionView removeFromSuperview];
            self.collectionView = nil;
        }
        self.hostViewController = nil;
    } @catch (NSException *e) {
        sbLog(@"[detach] ✗ EXCEPTION: %@", e.reason);
    }
}

#pragma mark - CollectionView

- (void)setupCollectionViewInViewController:(UIViewController *)vc {
    if (self.collectionView) return;
    sbLog(@"[setupCollectionView] creating");

    @try {
        UICollectionViewFlowLayout *layout = [[UICollectionViewFlowLayout alloc] init];
        layout.scrollDirection = UICollectionViewScrollDirectionHorizontal;
        layout.itemSize = CGSizeMake(60, 80);
        layout.minimumLineSpacing = 8;
        layout.minimumInteritemSpacing = 8;
        layout.sectionInset = UIEdgeInsetsMake(8, 12, 8, 12);

        CGFloat viewWidth = vc.view.bounds.size.width;
        if (viewWidth < 1) viewWidth = [UIScreen mainScreen].bounds.size.width;

        CGRect frame = CGRectMake(0, 0, viewWidth, 96);
        self.collectionView = [[UICollectionView alloc] initWithFrame:frame collectionViewLayout:layout];
        self.collectionView.backgroundColor = [UIColor colorWithWhite:0.95 alpha:1.0];
        self.collectionView.showsHorizontalScrollIndicator = NO;
        self.collectionView.delegate = self;
        self.collectionView.dataSource = self;
        [self.collectionView registerClass:[UICollectionViewCell class]
                forCellWithReuseIdentifier:kCellReuseIdentifier];

        [vc.view addSubview:self.collectionView];
        [self reloadData];
        sbLog(@"[setupCollectionView] ✓ complete");
    } @catch (NSException *e) {
        sbLog(@"[setupCollectionView] ✗ EXCEPTION: %@", e.reason);
        self.collectionView = nil;
    }
}

#pragma mark - Helpers

- (UITableView *)findTableViewInVC:(UIViewController *)vc {
    if (!vc) return nil;
    @try {
        if (![vc isViewLoaded]) return nil;
        if ([vc.view isKindOfClass:[UITableView class]]) return (UITableView *)vc.view;
        for (UIView *subview in vc.view.subviews) {
            if ([subview isKindOfClass:[UITableView class]]) return (UITableView *)subview;
        }
        SEL tvMgrSel = NSSelectorFromString(@"tableViewManager");
        if ([vc respondsToSelector:tvMgrSel]) {
            id tvMgr = ((id (*)(id, SEL))objc_msgSend)(vc, tvMgrSel);
            if (tvMgr) {
                SEL tvSel = NSSelectorFromString(@"m_tableView");
                if (![tvMgr respondsToSelector:tvSel]) tvSel = NSSelectorFromString(@"tableView");
                if ([tvMgr respondsToSelector:tvSel]) {
                    id tv = ((id (*)(id, SEL))objc_msgSend)(tvMgr, tvSel);
                    if ([tv isKindOfClass:[UITableView class]]) return (UITableView *)tv;
                }
            }
        }
    } @catch (NSException *e) {}
    return nil;
}

- (NSString *)userNameAtIndexPath:(NSIndexPath *)indexPath inTableView:(UITableView *)tableView dataSource:(id)dataSource {
    @try {
        SEL sessionInfoSel = NSSelectorFromString(@"getSessionInfoAtIndexPath:");
        if (![dataSource respondsToSelector:sessionInfoSel])
            sessionInfoSel = NSSelectorFromString(@"logicGetSessionAtIndexPath:");
        if (![dataSource respondsToSelector:sessionInfoSel])
            sessionInfoSel = NSSelectorFromString(@"sessionInfoForIndexPath:");
        if (![dataSource respondsToSelector:sessionInfoSel]) return nil;

        id sessionInfo = ((id (*)(id, SEL, id))objc_msgSend)(dataSource, sessionInfoSel, indexPath);
        if (!sessionInfo) return nil;

        SEL userNameSel = NSSelectorFromString(@"m_nsUserName");
        if (![sessionInfo respondsToSelector:userNameSel]) return nil;
        id userNameObj = ((id (*)(id, SEL))objc_msgSend)(sessionInfo, userNameSel);
        if (![userNameObj isKindOfClass:[NSString class]]) return nil;
        return (NSString *)userNameObj;
    } @catch (NSException *e) {
        return nil;
    }
}

#pragma mark - UICollectionViewDataSource

- (NSInteger)numberOfSectionsInCollectionView:(UICollectionView *)collectionView {
    return 1;
}

- (NSInteger)collectionView:(UICollectionView *)collectionView
     numberOfItemsInSection:(NSInteger)section {
    return (NSInteger)self.filterSessionList.count;
}

- (UICollectionViewCell *)collectionView:(UICollectionView *)collectionView
                  cellForItemAtIndexPath:(NSIndexPath *)indexPath {
    UICollectionViewCell *cell = [collectionView dequeueReusableCellWithReuseIdentifier:kCellReuseIdentifier forIndexPath:indexPath];
    if (indexPath.item >= (NSInteger)self.filterSessionList.count) return cell;

    NSString *userName = self.filterSessionList[indexPath.item];
    for (UIView *subview in cell.contentView.subviews) [subview removeFromSuperview];

    UIImageView *avatarView = [[UIImageView alloc] initWithFrame:CGRectMake(10, 4, 40, 40)];
    avatarView.layer.cornerRadius = 5;
    avatarView.layer.masksToBounds = YES;
    avatarView.backgroundColor = [UIColor lightGrayColor];
    [cell.contentView addSubview:avatarView];

    UILabel *nameLabel = [[UILabel alloc] initWithFrame:CGRectMake(0, 48, 60, 24)];
    nameLabel.textAlignment = NSTextAlignmentCenter;
    nameLabel.font = [UIFont systemFontOfSize:10];
    nameLabel.textColor = [UIColor darkGrayColor];

    @try {
        id contactMgr = getContactMgr();
        if (contactMgr) {
            SEL gcSel = NSSelectorFromString(@"getContactByName:");
            if (![contactMgr respondsToSelector:gcSel]) gcSel = NSSelectorFromString(@"getContactByNameFromCache:");
            if ([contactMgr respondsToSelector:gcSel]) {
                id contact = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, gcSel, userName);
                if (contact) {
                    NSString *remark = @"";
                    if ([contact respondsToSelector:NSSelectorFromString(@"m_nsRemark")]) {
                        id r = ((id (*)(id, SEL))objc_msgSend)(contact, NSSelectorFromString(@"m_nsRemark"));
                        if ([r isKindOfClass:[NSString class]]) remark = r;
                    }
                    NSString *nick = @"";
                    if ([contact respondsToSelector:NSSelectorFromString(@"m_nsNickName")]) {
                        id n = ((id (*)(id, SEL))objc_msgSend)(contact, NSSelectorFromString(@"m_nsNickName"));
                        if ([n isKindOfClass:[NSString class]]) nick = n;
                    }
                    nameLabel.text = remark.length > 0 ? remark : nick;
                }
            }
        }
    } @catch (NSException *e) {}

    [cell.contentView addSubview:nameLabel];
    return cell;
}

#pragma mark - UICollectionViewDelegate

- (void)collectionView:(UICollectionView *)collectionView
didSelectItemAtIndexPath:(NSIndexPath *)indexPath {
    @try {
        if (indexPath.item >= (NSInteger)self.filterSessionList.count) return;
        NSString *userName = self.filterSessionList[indexPath.item];
        Class chatMgrClass = objc_getClass("CChatContactMgr");
        if (!chatMgrClass) chatMgrClass = objc_getClass("CMessageMgr");
        if (chatMgrClass) {
            id chatMgr = getService(chatMgrClass);
            SEL openSel = NSSelectorFromString(@"openChatWithUserName:");
            if (chatMgr && [chatMgr respondsToSelector:openSel]) {
                ((void (*)(id, SEL, id))objc_msgSend)(chatMgr, openSel, userName);
            }
        }
    } @catch (NSException *e) {}
}

#pragma mark - Business Logic

- (void)togglePin:(NSString *)userName isTop:(BOOL)isTop {
    @try {
        id sessionMgr = getSessionMgr();
        id contactMgr = getContactMgr();

        if (!isTop) {
            if (sessionMgr && [sessionMgr respondsToSelector:NSSelectorFromString(@"TopSessionByName:")]) {
                ((void (*)(id, SEL, id))objc_msgSend)(sessionMgr, NSSelectorFromString(@"TopSessionByName:"), userName);
            }
            if (contactMgr) {
                SEL gcSel = NSSelectorFromString(@"getContactByName:");
                if (![contactMgr respondsToSelector:gcSel]) gcSel = NSSelectorFromString(@"getContactByNameFromCache:");
                if ([contactMgr respondsToSelector:gcSel]) {
                    id contact = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, gcSel, userName);
                    if (contact && [contactMgr respondsToSelector:NSSelectorFromString(@"setContact:sessionTop:sync:")]) {
                        ((void (*)(id, SEL, id, BOOL, BOOL))objc_msgSend)(contactMgr, NSSelectorFromString(@"setContact:sessionTop:sync:"), contact, YES, YES);
                    }
                }
            }
        } else {
            if (sessionMgr && [sessionMgr respondsToSelector:NSSelectorFromString(@"UntopSessionByName:")]) {
                ((void (*)(id, SEL, id))objc_msgSend)(sessionMgr, NSSelectorFromString(@"UntopSessionByName:"), userName);
            }
            if (contactMgr) {
                SEL gcSel = NSSelectorFromString(@"getContactByName:");
                if (![contactMgr respondsToSelector:gcSel]) gcSel = NSSelectorFromString(@"getContactByNameFromCache:");
                if ([contactMgr respondsToSelector:gcSel]) {
                    id contact = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, gcSel, userName);
                    if (contact && [contactMgr respondsToSelector:NSSelectorFromString(@"setContact:sessionTop:sync:")]) {
                        ((void (*)(id, SEL, id, BOOL, BOOL))objc_msgSend)(contactMgr, NSSelectorFromString(@"setContact:sessionTop:sync:"), contact, NO, YES);
                    }
                }
            }
        }

        [self refreshSessionList];
        [self reloadData];
    } @catch (NSException *e) {
        sbLog(@"[togglePin] ✗ EXCEPTION: %@", e.reason);
    }
}

- (void)toggleMute:(NSString *)userName isMuted:(BOOL)isMuted {
    @try {
        id contactMgr = getContactMgr();
        if (!contactMgr) return;
        NSInteger newStatus = isMuted ? 1 : 0;
        if ([contactMgr respondsToSelector:NSSelectorFromString(@"ChangeNotifyStatus:withStatus:sync:")]) {
            ((void (*)(id, SEL, id, NSInteger, BOOL))objc_msgSend)(contactMgr, NSSelectorFromString(@"ChangeNotifyStatus:withStatus:sync:"), userName, newStatus, YES);
        }

        PluginConfig *config = [PluginConfig shared];
        if (!isMuted) {
            if (![config.muteContactList containsObject:userName]) {
                [config.muteContactList addObject:userName];
                [config save];
            }
        } else {
            [config.muteContactList removeObject:userName];
            [config save];
        }
    } @catch (NSException *e) {
        sbLog(@"[toggleMute] ✗ EXCEPTION: %@", e.reason);
    }
}

- (void)showEditRemark:(NSString *)userName {
    @try {
        id contactMgr = getContactMgr();
        if (!contactMgr) return;
        SEL gcSel = NSSelectorFromString(@"getContactByName:");
        if (![contactMgr respondsToSelector:gcSel]) gcSel = NSSelectorFromString(@"getContactByNameFromCache:");
        if (![contactMgr respondsToSelector:gcSel]) return;
        id contact = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, gcSel, userName);
        if (!contact) return;

        NSString *currentRemark = @"";
        if ([contact respondsToSelector:NSSelectorFromString(@"m_nsRemark")]) {
            id r = ((id (*)(id, SEL))objc_msgSend)(contact, NSSelectorFromString(@"m_nsRemark"));
            if ([r isKindOfClass:[NSString class]]) currentRemark = r;
        }
        NSString *nickName = @"";
        if ([contact respondsToSelector:NSSelectorFromString(@"m_nsNickName")]) {
            id n = ((id (*)(id, SEL))objc_msgSend)(contact, NSSelectorFromString(@"m_nsNickName"));
            if ([n isKindOfClass:[NSString class]]) nickName = n;
        }

        dispatch_async(dispatch_get_main_queue(), ^{
            @try {
                UIAlertController *alert = [UIAlertController
                    alertControllerWithTitle:@"修改备注"
                                    message:[NSString stringWithFormat:@"当前昵称: %@", nickName]
                             preferredStyle:UIAlertControllerStyleAlert];
                [alert addTextFieldWithConfigurationHandler:^(UITextField *textField) {
                    textField.text = currentRemark;
                    textField.placeholder = @"请输入备注名";
                }];
                [alert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
                    @try {
                        NSString *newRemark = alert.textFields.firstObject.text ?: @"";
                        if ([contact respondsToSelector:NSSelectorFromString(@"setM_nsRemark:")]) {
                            ((void (*)(id, SEL, id))objc_msgSend)(contact, NSSelectorFromString(@"setM_nsRemark:"), newRemark);
                        }
                        if ([contactMgr respondsToSelector:NSSelectorFromString(@"modifyDataItem:notify:")]) {
                            ((void (*)(id, SEL, id, BOOL))objc_msgSend)(contactMgr, NSSelectorFromString(@"modifyDataItem:notify:"), contact, YES);
                        } else {
                            SEL updateSel = NSSelectorFromString(@"updateContact:");
                            if ([contactMgr respondsToSelector:updateSel]) {
                                ((void (*)(id, SEL, id))objc_msgSend)(contactMgr, updateSel, contact);
                            }
                        }
                        id sessionMgr = getSessionMgr();
                        if (sessionMgr && [sessionMgr respondsToSelector:NSSelectorFromString(@"updateMainSessionList")]) {
                            ((void (*)(id, SEL))objc_msgSend)(sessionMgr, NSSelectorFromString(@"updateMainSessionList"));
                        }
                    } @catch (NSException *e) {}
                }]];
                [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
                UIViewController *vc = [self topViewController];
                if (vc) [vc presentViewController:alert animated:YES completion:nil];
            } @catch (NSException *e) {}
        });
    } @catch (NSException *e) {
        sbLog(@"[showEditRemark] ✗ EXCEPTION: %@", e.reason);
    }
}

#pragma mark - Data

- (void)reloadData {
    [self filterSessionList];
    if (self.collectionView) [self.collectionView reloadData];
}

- (void)filterSessionList {
    [self.filterSessionList removeAllObjects];
    @try {
        id sessionMgr = getSessionMgr();
        if (!sessionMgr) return;
        SEL listSel = NSSelectorFromString(@"GetSessionInfoList");
        if (![sessionMgr respondsToSelector:listSel]) listSel = NSSelectorFromString(@"getSessionInfoList");
        if (![sessionMgr respondsToSelector:listSel]) return;
        id list = ((id (*)(id, SEL))objc_msgSend)(sessionMgr, listSel);
        if (![list isKindOfClass:[NSArray class]]) return;

        PluginConfig *config = [PluginConfig shared];
        for (id sessionInfo in (NSArray *)list) {
            @try {
                SEL nameSel = NSSelectorFromString(@"m_nsUserName");
                if (![sessionInfo respondsToSelector:nameSel]) continue;
                id nameObj = ((id (*)(id, SEL))objc_msgSend)(sessionInfo, nameSel);
                if (![nameObj isKindOfClass:[NSString class]]) continue;
                NSString *userName = (NSString *)nameObj;
                if (!userName.length) continue;

                BOOL shouldAdd = NO;
                SEL topSel = NSSelectorFromString(@"m_bIsTop");
                if ([sessionInfo respondsToSelector:topSel]) {
                    if (((BOOL (*)(id, SEL))objc_msgSend)(sessionInfo, topSel)) shouldAdd = YES;
                }
                if (!shouldAdd && [self isContactInChatBox:userName]) shouldAdd = YES;
                if (!shouldAdd && config.brandTopEnabled) {
                    SEL brandSel = NSSelectorFromString(@"isBrandSessionHolder");
                    if ([sessionInfo respondsToSelector:brandSel]) {
                        if (((BOOL (*)(id, SEL))objc_msgSend)(sessionInfo, brandSel)) shouldAdd = YES;
                    }
                }
                if (shouldAdd && ![self.filterSessionList containsObject:userName]) {
                    [self.filterSessionList addObject:userName];
                }
            } @catch (NSException *e) { continue; }
        }
    } @catch (NSException *e) {}
}

- (BOOL)isContactInChatBox:(NSString *)userName {
    return [self.filterSessionList containsObject:userName];
}

- (void)addContactToChatBox:(NSString *)userName {
    if (![self.filterSessionList containsObject:userName]) {
        [self.filterSessionList addObject:userName];
        [self.collectionView reloadData];
    }
}

- (void)removeContactFromChatBox:(NSString *)userName {
    [self.filterSessionList removeObject:userName];
    [self.collectionView reloadData];
}

- (NSArray *)chatBoxSessions {
    return [self.filterSessionList copy];
}

#pragma mark - Status Helpers

- (BOOL)isSessionTop:(NSString *)userName {
    @try {
        id contactMgr = getContactMgr();
        if (!contactMgr) return NO;
        SEL gcSel = NSSelectorFromString(@"getContactByName:");
        if (![contactMgr respondsToSelector:gcSel]) gcSel = NSSelectorFromString(@"getContactByNameFromCache:");
        if (![contactMgr respondsToSelector:gcSel]) return NO;
        id contact = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, gcSel, userName);
        if (!contact) return NO;
        SEL topSel = NSSelectorFromString(@"isContactSessionTop");
        if (![contact respondsToSelector:topSel]) return NO;
        return ((BOOL (*)(id, SEL))objc_msgSend)(contact, topSel);
    } @catch (NSException *e) { return NO; }
}

- (BOOL)isSessionMuted:(NSString *)userName {
    @try {
        id contactMgr = getContactMgr();
        if (!contactMgr) return NO;
        SEL gcSel = NSSelectorFromString(@"getContactByName:");
        if (![contactMgr respondsToSelector:gcSel]) gcSel = NSSelectorFromString(@"getContactByNameFromCache:");
        if (![contactMgr respondsToSelector:gcSel]) return NO;
        id contact = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, gcSel, userName);
        if (!contact) return NO;
        SEL notifySel = NSSelectorFromString(@"isChatStatusNotifyOpen");
        if (![contact respondsToSelector:notifySel]) return NO;
        return !((BOOL (*)(id, SEL))objc_msgSend)(contact, notifySel);
    } @catch (NSException *e) { return NO; }
}

- (void)refreshSessionList {
    @try {
        id sessionMgr = getSessionMgr();
        if (!sessionMgr) return;
        if ([sessionMgr respondsToSelector:NSSelectorFromString(@"resortSessions")]) {
            ((void (*)(id, SEL))objc_msgSend)(sessionMgr, NSSelectorFromString(@"resortSessions"));
        }
        if ([sessionMgr respondsToSelector:NSSelectorFromString(@"updateMainSessionList")]) {
            ((void (*)(id, SEL))objc_msgSend)(sessionMgr, NSSelectorFromString(@"updateMainSessionList"));
        }
    } @catch (NSException *e) {}
}

- (UIViewController *)topViewController {
    @try {
        UIViewController *rootVC = nil;
        for (UIWindow *window in [UIApplication sharedApplication].windows) {
            if (window.isKeyWindow) { rootVC = window.rootViewController; break; }
        }
        if (!rootVC && [UIApplication sharedApplication].windows.count > 0) {
            rootVC = [UIApplication sharedApplication].windows.firstObject.rootViewController;
        }
        if (!rootVC) return nil;
        NSUInteger depth = 0;
        while (rootVC.presentedViewController && depth < 10) { rootVC = rootVC.presentedViewController; depth++; }
        while ([rootVC respondsToSelector:@selector(visibleViewController)] && [rootVC performSelector:@selector(visibleViewController)] && depth < 20) {
            rootVC = [rootVC performSelector:@selector(visibleViewController)]; depth++;
        }
        return rootVC;
    } @catch (NSException *e) { return nil; }
}

@end
