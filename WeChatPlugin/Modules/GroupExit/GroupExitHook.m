#import "GroupExitHook.h"
#import "../../Config/PluginConfig.h"
#import <objc/runtime.h>
#import <objc/message.h>

#pragma mark - 工具函数

static id getService(Class serviceClass) {
    Class MMServiceCenterClass = objc_getClass("MMServiceCenter");
    if (!MMServiceCenterClass) return nil;
    id center = ((id (*)(id, SEL, ...))objc_msgSend)(MMServiceCenterClass, NSSelectorFromString(@"defaultCenter"));
    if (!center) return nil;
    return ((id (*)(id, SEL, Class, ...))objc_msgSend)(center, NSSelectorFromString(@"getService:"), serviceClass);
}

static void groupExitLog(NSString *content) {
    @try {
        NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
        NSString *folderPath = [paths.firstObject stringByAppendingPathComponent:@"WeChatPlugin_Logs"];
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
            groupExitLog([NSString stringWithFormat:@"[GroupExit] Skipping duplicate exit (elapsed %.2fs < %.2fs): %@", elapsed, DEBOUNCE_INTERVAL, key]);
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
    
    groupExitLog([NSString stringWithFormat:@"[GroupExit] Preparing to insert notification for %@", chatRoomName]);
    
    dispatch_async(dispatch_get_main_queue(), ^{
        @try {
            Class msgWrapClass = objc_getClass("CMessageWrap");
            if (!msgWrapClass) {
                groupExitLog(@"[GroupExit] CMessageWrap class not found");
                return;
            }
            
            id msgWrap = ((id(*)(id, SEL, unsigned int))objc_msgSend)([msgWrapClass alloc], NSSelectorFromString(@"initWithMsgType:"), 0x2710);
            if (!msgWrap) {
                groupExitLog(@"[GroupExit] Failed to create CMessageWrap instance");
                return;
            }
            
            groupExitLog(@"[GroupExit] CMessageWrap created successfully");
            
            SEL setFromUsrSel = NSSelectorFromString(@"setM_nsFromUsr:");
            if ([msgWrap respondsToSelector:setFromUsrSel])
                ((void(*)(id, SEL, id))objc_msgSend)(msgWrap, setFromUsrSel, chatRoomName);
            
            SEL setToUsrSel = NSSelectorFromString(@"setM_nsToUsr:");
            if ([msgWrap respondsToSelector:setToUsrSel])
                ((void(*)(id, SEL, id))objc_msgSend)(msgWrap, setToUsrSel, chatRoomName);
            
            SEL setStatusSel = NSSelectorFromString(@"setM_uiStatus:");
            if ([msgWrap respondsToSelector:setStatusSel])
                ((void(*)(id, SEL, unsigned int))objc_msgSend)(msgWrap, setStatusSel, 4);
            
            SEL setContentSel = NSSelectorFromString(@"setM_nsContent:");
            if ([msgWrap respondsToSelector:setContentSel])
                ((void(*)(id, SEL, id))objc_msgSend)(msgWrap, setContentSel, msgContent);
            
            SEL setCreateTimeSel = NSSelectorFromString(@"setM_uiCreateTime:");
            if ([msgWrap respondsToSelector:setCreateTimeSel])
                ((void(*)(id, SEL, unsigned int))objc_msgSend)(msgWrap, setCreateTimeSel, (unsigned int)[[NSDate date] timeIntervalSince1970]);
            
            id msgMgr = getService(objc_getClass("CMessageMgr"));
            if (!msgMgr) {
                groupExitLog(@"[GroupExit] CMessageMgr is nil");
                return;
            }
            
            groupExitLog(@"[GroupExit] CMessageMgr found, calling AddLocalMsg...");
            
            SEL addLocalMsgSel = NSSelectorFromString(@"AddLocalMsg:MsgWrap:fixTime:NewMsgArriveNotify:");
            if ([msgMgr respondsToSelector:addLocalMsgSel]) {
                ((void(*)(id, SEL, id, id, BOOL, BOOL))objc_msgSend)(msgMgr, addLocalMsgSel, chatRoomName, msgWrap, YES, NO);
                groupExitLog([NSString stringWithFormat:@"[GroupExit] ✅ Inserted notification: %@ left %@", nickname, chatRoomName]);
            } else {
                SEL addSimpleSel = NSSelectorFromString(@"AddLocalMsg:MsgWrap:");
                if ([msgMgr respondsToSelector:addSimpleSel]) {
                    ((void(*)(id, SEL, id, id))objc_msgSend)(msgMgr, addSimpleSel, chatRoomName, msgWrap);
                    groupExitLog([NSString stringWithFormat:@"[GroupExit] ✅ Inserted notification (simple): %@ left %@", nickname, chatRoomName]);
                } else {
                    groupExitLog(@"[GroupExit] No AddLocalMsg method found");
                }
            }
        } @catch (NSException *e) {
            groupExitLog([NSString stringWithFormat:@"[GroupExit] Error inserting message: %@", e]);
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
                        groupExitLog(@"[GroupExit] Skipping empty exitUserId");
                        continue;
                    }
                    
                    NSString *nickname = exitUserId;
                    @try {
                        id contactMgr = getService(objc_getClass("CContactMgr"));
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
    groupExitLog(@"[GroupExitHook] install start");
    
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
                groupExitLog(@"[GroupExitHook] Hook installed for setM_nsChatRoomMemList:");
            } else {
                groupExitLog(@"[GroupExitHook] setM_nsChatRoomMemList: method NOT found");
            }
        } else {
            groupExitLog(@"[GroupExitHook] CContact class NOT found");
        }
    }
    
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(15 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        appReady = YES;
        groupExitLog(@"[GroupExitHook] appReady = YES");
        
        if ([PluginConfig shared].enableGroupExitMonitor) {
            [self startMonitoring];
        }
    });
    
    groupExitLog(@"[GroupExitHook] install complete");
}

+ (void)startMonitoring {
    if (isMonitoring) {
        groupExitLog(@"[GroupExitHook] Already monitoring");
        return;
    }
    
    isMonitoring = YES;
    [groupMemberSnapshots removeAllObjects];
    groupExitLog(@"[GroupExitHook] startMonitoring");
}

+ (void)stopMonitoring {
    if (!isMonitoring) {
        groupExitLog(@"[GroupExitHook] Not monitoring");
        return;
    }
    
    isMonitoring = NO;
    [groupMemberSnapshots removeAllObjects];
    [processedExits removeAllObjects];
    groupExitLog(@"[GroupExitHook] stopMonitoring");
}

+ (BOOL)isMonitoring {
    return isMonitoring;
}

@end
