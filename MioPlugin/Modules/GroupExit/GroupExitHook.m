#import "GroupExitHook.h"
#import "GroupExitConfig.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import "../../Core/LogManager.h"
#import "../../Core/ServiceHelper.h"
#import "../../Core/WPUtility.h"

#pragma mark - 工具函数

static void groupExitLog(NSString *content) {
    @try {
        NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
        NSString *folderPath = [paths.firstObject stringByAppendingPathComponent:@"MioPlugin_Logs"];
        [[NSFileManager defaultManager] createDirectoryAtPath:folderPath withIntermediateDirectories:YES attributes:nil error:nil];
        NSString *filePath = [folderPath stringByAppendingPathComponent:@"groupexit.log"];
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

#pragma mark - 静态变量

static NSMutableDictionary<NSString *, NSString *> *groupMemberSnapshots = nil;
static NSMutableDictionary<NSString *, NSDate *> *processedExits = nil;
static BOOL isMonitoring = NO;
static BOOL appReady = NO;
static IMP original_CContact_setM_nsChatRoomMemList = NULL;
static BOOL hookInstalled = NO;
static const NSTimeInterval DEBOUNCE_INTERVAL = 5.0;

#pragma mark - 核心逻辑

static BOOL shouldProcessExit(NSString *chatRoomName, NSString *exitUserId) {
    NSString *key = [NSString stringWithFormat:@"%@_%@", chatRoomName, exitUserId];
    
    NSDate *lastProcessed = processedExits[key];
    if (lastProcessed) {
        NSTimeInterval elapsed = [[NSDate date] timeIntervalSinceDate:lastProcessed];
        if (elapsed < DEBOUNCE_INTERVAL) {
            WPLog(@"GroupExit", @"[GroupExit] Skipping duplicate exit (elapsed %.2fs < %.2fs): %@", elapsed, DEBOUNCE_INTERVAL, key);
            return NO;
        }
    }
    
    processedExits[key] = [NSDate date];
    
    NSArray *allKeys = [processedExits allKeys];
    if (allKeys.count > 100) {
        NSMutableArray *keysToRemove = [NSMutableArray array];
        for (NSString *k in allKeys) {
            NSDate *date = processedExits[k];
            if ([[NSDate date] timeIntervalSinceDate:date] > DEBOUNCE_INTERVAL * 2) {
                [keysToRemove addObject:k];
            }
        }
        [processedExits removeObjectsForKeys:keysToRemove];
    }
    
    return YES;
}

static void insertExitNotification(NSString *chatRoomName, NSString *exitUserId, NSString *nickname) {
    if (!shouldProcessExit(chatRoomName, exitUserId)) {
        return;
    }
    
    NSString *msgContent = [NSString stringWithFormat:
        @"监测到\"<a href=\"weixin://contacts/profile/%@/\">%@</a>\"退出了群聊",
        exitUserId, nickname];
    
    WPLog(@"GroupExit", @"[GroupExit] Preparing to insert notification for %@", chatRoomName);
    
    dispatch_async(dispatch_get_main_queue(), ^{
        @try {
            id msgMgr = WXGetService(objc_getClass("CMessageMgr"));
            if (!msgMgr) {
                WPLog(@"GroupExit", @"[GroupExit] CMessageMgr is nil");
                return;
            }
            
            id result = [WPUtility insertSystemTipMessageInSession:chatRoomName
                                                           content:msgContent
                                                            msgMgr:msgMgr
                                                        createTime:0
                                                           fromUsr:chatRoomName
                                                             toUsr:chatRoomName
                                                           msgWrap:nil
                                                       extraSetup:nil];
            if (result) {
                WPLog(@"GroupExit", @"[GroupExit] ✅ Inserted notification: %@ left %@", nickname, chatRoomName);
            }
        } @catch (NSException *e) {
            WPLog(@"GroupExit", @"[GroupExit] Exception: %@", e);
        }
    });
}

static void checkMemberExit(id contact, NSString *newMemberList) {
    if (!appReady || !isMonitoring) {
        return;
    }
    
    NSString *chatRoomName = nil;
    @try {
        chatRoomName = ((id(*)(id, SEL))objc_msgSend)(contact, NSSelectorFromString(@"userName"));
    } @catch (NSException *e) {
        return;
    }
    
    if (!chatRoomName || ![chatRoomName hasSuffix:@"@chatroom"]) {
        return;
    }
    
    if (!newMemberList || newMemberList.length == 0) {
        return;
    }
    
    NSString *oldMemberList = groupMemberSnapshots[chatRoomName];
    
    if (oldMemberList && [oldMemberList isEqualToString:newMemberList]) {
        return;
    }
    
    groupExitLog([NSString stringWithFormat:@"[GroupExit] %@ setter called, old=%@, new=%lu", 
                  chatRoomName, 
                  oldMemberList ? [NSString stringWithFormat:@"%lu", (unsigned long)oldMemberList.length] : @"nil",
                  (unsigned long)newMemberList.length]);
    
    if (oldMemberList && oldMemberList.length > 0) {
        NSArray *oldMembers = [oldMemberList componentsSeparatedByString:@";"];
        NSArray *newMembers = [newMemberList componentsSeparatedByString:@";"];
        
        groupExitLog([NSString stringWithFormat:@"[GroupExit] %@ members: %lu -> %lu", 
                      chatRoomName, (unsigned long)oldMembers.count, (unsigned long)newMembers.count]);
        
        if (oldMembers.count > newMembers.count && newMembers.count > 0) {
            NSMutableSet *oldSet = [NSMutableSet setWithArray:oldMembers];
            NSSet *newSet = [NSSet setWithArray:newMembers];
            [oldSet minusSet:newSet];
            
            if (oldSet.count > 0) {
                groupExitLog([NSString stringWithFormat:@"[GroupExit] %@ exit detected, diff count=%lu", 
                              chatRoomName, (unsigned long)oldSet.count]);
                
                for (NSString *exitUserId in oldSet) {
                    groupExitLog([NSString stringWithFormat:@"[GroupExit] Processing exitUserId: '%@', length=%lu", 
                                  exitUserId, (unsigned long)exitUserId.length]);
                    if (exitUserId.length == 0) {
                        WPLog(@"GroupExit", @"[GroupExit] Skipping empty exitUserId");
                        continue;
                    }
                    
                    NSString *nickname = exitUserId;
                    @try {
                        id contactMgr = WXGetService(objc_getClass("CContactMgr"));
                        if (contactMgr) {
                            id exitContact = ((id(*)(id, SEL, NSString *))objc_msgSend)(contactMgr, NSSelectorFromString(@"getContactByName:"), exitUserId);
                            if (exitContact) {
                                NSString *nick = ((id(*)(id, SEL))objc_msgSend)(exitContact, NSSelectorFromString(@"m_nsNickName"));
                                if (nick.length > 0) nickname = nick;
                            }
                        }
                    } @catch (NSException *e) {}
                    
                    insertExitNotification(chatRoomName, exitUserId, nickname);
                }
            }
        }
    }
    
    groupMemberSnapshots[chatRoomName] = newMemberList;
}

#pragma mark - Hook

static void hooked_CContact_setM_nsChatRoomMemList(id self, SEL _cmd, NSString *memberList) {
    if (original_CContact_setM_nsChatRoomMemList) {
        ((void(*)(id, SEL, NSString *))original_CContact_setM_nsChatRoomMemList)(self, _cmd, memberList);
    }
    
    checkMemberExit(self, memberList);
}

#pragma mark - Implementation

@implementation GroupExitHook

+ (void)install {
    WPLog(@"GroupExit", @"[GroupExitHook] install start");
    
    if (!groupMemberSnapshots) {
        groupMemberSnapshots = [NSMutableDictionary dictionary];
    }
    
    if (!processedExits) {
        processedExits = [NSMutableDictionary dictionary];
    }
    
    if (!hookInstalled) {
        Class contactClass = objc_getClass("CContact");
        if (contactClass) {
            SEL setMemberListSel = NSSelectorFromString(@"setM_nsChatRoomMemList:");
            Method setMethod = class_getInstanceMethod(contactClass, setMemberListSel);
            if (setMethod) {
                original_CContact_setM_nsChatRoomMemList = method_setImplementation(setMethod, (IMP)hooked_CContact_setM_nsChatRoomMemList);
                hookInstalled = YES;
                WPLog(@"GroupExit", @"[GroupExitHook] Hook installed for setM_nsChatRoomMemList:");
            } else {
                WPLog(@"GroupExit", @"[GroupExitHook] setM_nsChatRoomMemList: method NOT found");
            }
        } else {
            WPLog(@"GroupExit", @"[GroupExitHook] CContact class NOT found");
        }
    }
    
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(15 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        appReady = YES;
        WPLog(@"GroupExit", @"[GroupExitHook] appReady = YES");
        
        if ([GroupExitConfig shared].enableGroupExitMonitor) {
            [self startMonitoring];
        }
    });
    
    WPLog(@"GroupExit", @"[GroupExitHook] install complete");
}

+ (void)startMonitoring {
    if (isMonitoring) {
        WPLog(@"GroupExit", @"[GroupExitHook] Already monitoring");
        return;
    }
    
    isMonitoring = YES;
    [groupMemberSnapshots removeAllObjects];
    WPLog(@"GroupExit", @"[GroupExitHook] startMonitoring");
}

+ (void)stopMonitoring {
    if (!isMonitoring) {
        WPLog(@"GroupExit", @"[GroupExitHook] Not monitoring");
        return;
    }
    
    isMonitoring = NO;
    [groupMemberSnapshots removeAllObjects];
    [processedExits removeAllObjects];
    WPLog(@"GroupExit", @"[GroupExitHook] stopMonitoring");
}

+ (BOOL)isMonitoring {
    return isMonitoring;
}

@end
