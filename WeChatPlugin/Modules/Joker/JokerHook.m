#import "JokerHook.h"
#import "../../Config/PluginConfig.h"
#import "../../Core/HookEngine.h"
#import "../../Core/WPAlert.h"
#import <objc/runtime.h>
#import <objc/message.h>

static void jokerLog(NSString *content) {
    @try {
        NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
        NSString *folderPath = [paths.firstObject stringByAppendingPathComponent:@"WeChatPlugin_Logs"];
        [[NSFileManager defaultManager] createDirectoryAtPath:folderPath withIntermediateDirectories:YES attributes:nil error:nil];
        NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
        formatter.dateFormat = @"yyyy-MM-dd HH:mm:ss";
        NSString *timestamp = [formatter stringFromDate:[NSDate date]];
        NSString *logLine = [NSString stringWithFormat:@"[%@] %@\n", timestamp, content];
        NSString *logPath = [folderPath stringByAppendingPathComponent:@"joker.log"];
        NSFileHandle *fh = [NSFileHandle fileHandleForWritingAtPath:logPath];
        if (!fh) {
            [[NSFileManager defaultManager] createFileAtPath:logPath contents:nil attributes:nil];
            fh = [NSFileHandle fileHandleForWritingAtPath:logPath];
        }
        [fh seekToEndOfFile];
        [fh writeData:[logLine dataUsingEncoding:NSUTF8StringEncoding]];
        [fh closeFile];
    } @catch (NSException *e) {}
}

static id g_currentMsgWrap = nil;
static id g_currentCellView = nil;
static IMP orig_willShowMenuController = NULL;
static IMP orig_actionSheetClickedButtonAtIndex = NULL;
static IMP orig_scrollActionSheetShowInView = NULL;
static IMP orig_scrollActionSheetShowInViewConstraint = NULL;
static IMP orig_showSelectMenu = NULL;
static IMP orig_showMenuWithItems = NULL;
static id g_currentChatViewController = nil;
static IMP orig_viewDidLoad = NULL;
static IMP orig_viewWillDisappear = NULL;

static void showEditDialog(id msgWrap, id cellView);

static void modifyMsgContent(id msgWrap, NSString *newContent) {
    jokerLog([NSString stringWithFormat:@"[Joker] modifyMsgContent: %@", newContent]);

    dispatch_async(dispatch_get_main_queue(), ^{
        if (g_currentCellView) {
            @try {
                jokerLog(@"[Joker] Updating RichTextView display only");
                
                Ivar richTextViewIvar = class_getInstanceVariable([g_currentCellView class], "m_richTextView");
                if (richTextViewIvar) {
                    id richTextView = object_getIvar(g_currentCellView, richTextViewIvar);
                    if (richTextView) {
                        SEL setContentSel = NSSelectorFromString(@"setContent:");
                        if ([richTextView respondsToSelector:setContentSel]) {
                            ((void(*)(id, SEL, id))objc_msgSend)(richTextView, setContentSel, newContent);
                            jokerLog(@"[Joker] ✅ Updated RichTextView with setContent:");
                        }
                        
                        SEL setTextSel = NSSelectorFromString(@"setText:");
                        if ([richTextView respondsToSelector:setTextSel]) {
                            ((void(*)(id, SEL, id))objc_msgSend)(richTextView, setTextSel, newContent);
                            jokerLog(@"[Joker] ✅ Updated RichTextView with setText:");
                        }
                        
                        [richTextView setNeedsLayout];
                        [richTextView layoutIfNeeded];
                        [richTextView setNeedsDisplay];
                        
                        jokerLog(@"[Joker] ✅ RichTextView refreshed");
                    }
                }
            } @catch (NSException *e) {
                jokerLog([NSString stringWithFormat:@"[Joker] ❌ Exception: %@", e]);
            }
        } else {
            jokerLog(@"[Joker] ⚠️ No current cell view");
        }
    });
}

static void showEditDialog(id msgWrap, id cellView) {
    jokerLog(@"[Joker] showEditDialog called");

    if (!msgWrap) return;

    NSString *currentContent = nil;
    @try {
        currentContent = [msgWrap performSelector:@selector(m_nsContent)];
    } @catch (NSException *e) {
        jokerLog([NSString stringWithFormat:@"[Joker] get m_nsContent failed: %@", e]);
        return;
    }

    if (!currentContent) currentContent = @"";

    jokerLog([NSString stringWithFormat:@"[Joker] Current content: %@", currentContent]);

    [WPAlert showInput:@"修改文字"
            placeholder:@"输入新内容"
           defaultValue:currentContent
          confirmTitle:@"确定"
                   from:nil
                handler:^(NSString *text) {
        modifyMsgContent(msgWrap, text);
    }];
    jokerLog(@"[Joker] Edit dialog presented");
}

static void hooked_willShowMenuController(id self, SEL _cmd, id menuController, id msgWrap) {
    jokerLog([NSString stringWithFormat:@"[Joker] willShowMenuController called, msgWrap=%@, menuController=%@", msgWrap, NSStringFromClass([menuController class])]);

    if (msgWrap) {
        NSUInteger msgType = 0;
        @try {
            msgType = (NSUInteger)[msgWrap performSelector:@selector(m_uiMessageType)];
        } @catch (NSException *e) {
            jokerLog([NSString stringWithFormat:@"[Joker] get m_uiMessageType error: %@", e]);
        }

        jokerLog([NSString stringWithFormat:@"[Joker] msgType=%lu", (unsigned long)msgType]);

        if (msgType == 1) {
            g_currentMsgWrap = msgWrap;
            jokerLog(@"[Joker] Saved text message msgWrap for later use");
        }
    }

    if (orig_willShowMenuController) {
        ((void(*)(id, SEL, id, id))orig_willShowMenuController)(self, _cmd, menuController, msgWrap);
    }
}

static void hooked_scrollActionSheetShowInView(id self, SEL _cmd, id view) {
    jokerLog([NSString stringWithFormat:@"[Joker] MMScrollActionSheet showInView called, self=%@, view=%@", NSStringFromClass([self class]), NSStringFromClass([view class])]);

    if (g_currentMsgWrap) {
        jokerLog(@"[Joker] Found saved msgWrap, adding '修改文字' button");

        @try {
            NSArray *itemArray = [self performSelector:@selector(itemArray)];
            jokerLog([NSString stringWithFormat:@"[Joker] Current itemArray: %@", itemArray]);

            NSMutableArray *newItems = [NSMutableArray arrayWithArray:itemArray];
            NSDictionary *modifyItem = @{@"title": @"修改文字"};
            [newItems addObject:modifyItem];

            ((void(*)(id, SEL, id))objc_msgSend)(self, NSSelectorFromString(@"setItemArray:"), newItems);
            jokerLog(@"[Joker] Added '修改文字' to itemArray");
        } @catch (NSException *e) {
            jokerLog([NSString stringWithFormat:@"[Joker] Modify itemArray error: %@", e]);
        }
    } else {
        jokerLog(@"[Joker] No saved msgWrap, skip adding button");
    }

    if (orig_scrollActionSheetShowInView) {
        ((void(*)(id, SEL, id))orig_scrollActionSheetShowInView)(self, _cmd, view);
    }
}

static void hooked_scrollActionSheetShowInViewConstraint(id self, SEL _cmd, id view, BOOL constraint) {
    jokerLog([NSString stringWithFormat:@"[Joker] MMScrollActionSheet showInView:isConstraintByParent: called, self=%@, view=%@, constraint=%d", NSStringFromClass([self class]), NSStringFromClass([view class]), constraint]);

    if (g_currentMsgWrap) {
        jokerLog(@"[Joker] Found saved msgWrap, adding '修改文字' button");

        @try {
            NSArray *itemArray = [self performSelector:@selector(itemArray)];
            jokerLog([NSString stringWithFormat:@"[Joker] Current itemArray: %@", itemArray]);

            NSMutableArray *newItems = [NSMutableArray arrayWithArray:itemArray];
            NSDictionary *modifyItem = @{@"title": @"修改文字"};
            [newItems addObject:modifyItem];

            ((void(*)(id, SEL, id))objc_msgSend)(self, NSSelectorFromString(@"setItemArray:"), newItems);
            jokerLog(@"[Joker] Added '修改文字' to itemArray");
        } @catch (NSException *e) {
            jokerLog([NSString stringWithFormat:@"[Joker] Modify itemArray error: %@", e]);
        }
    } else {
        jokerLog(@"[Joker] No saved msgWrap, skip adding button");
    }

    if (orig_scrollActionSheetShowInViewConstraint) {
        ((void(*)(id, SEL, id, BOOL))orig_scrollActionSheetShowInViewConstraint)(self, _cmd, view, constraint);
    }
}

static void hooked_showSelectMenu(id self, SEL _cmd) {
    jokerLog(@"[Joker] MMRichTextCoverView showSelectMenu called");

    if (g_currentMsgWrap) {
        jokerLog(@"[Joker] Found saved msgWrap, trying to add '修改文字' menu item");

        @try {
            id menuResponder = [self performSelector:@selector(menuResponder)];
            if (menuResponder) {
                jokerLog([NSString stringWithFormat:@"[Joker] menuResponder=%@", NSStringFromClass([menuResponder class])]);

                NSArray *originMenuItems = [menuResponder performSelector:@selector(originMenuItems)];
                jokerLog([NSString stringWithFormat:@"[Joker] originMenuItems: %@", originMenuItems]);

                NSMutableArray *newItems = [NSMutableArray arrayWithArray:originMenuItems];
                NSDictionary *modifyItem = @{@"title": @"修改文字"};
                [newItems addObject:modifyItem];

                ((void(*)(id, SEL, id))objc_msgSend)(menuResponder, NSSelectorFromString(@"setOriginMenuItems:"), newItems);
                jokerLog(@"[Joker] Added '修改文字' to originMenuItems");
            }
        } @catch (NSException *e) {
            jokerLog([NSString stringWithFormat:@"[Joker] Modify menuResponder error: %@", e]);
        }
    }

    if (orig_showSelectMenu) {
        ((void(*)(id, SEL))orig_showSelectMenu)(self, _cmd);
    }
}

static void onModifyTextMenuItemClick(id self, SEL _cmd, id sender) {
    jokerLog(@"[Joker] onModifyTextMenuItemClick called");
    
    @try {
        SEL hideMenuSel = NSSelectorFromString(@"hideMenuUI");
        if ([self respondsToSelector:hideMenuSel]) {
            ((void(*)(id, SEL))objc_msgSend)(self, hideMenuSel);
            jokerLog(@"[Joker] hideMenuUI called");
        }
    } @catch (NSException *e) {
        jokerLog([NSString stringWithFormat:@"[Joker] hideMenuUI error: %@", e]);
    }
    
    if (g_currentMsgWrap) {
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.3 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
            showEditDialog(g_currentMsgWrap, nil);
        });
    } else {
        jokerLog(@"[Joker] No saved msgWrap");
    }
}

static void hooked_viewDidLoad(id self, SEL _cmd) {
    jokerLog(@"[Joker] BaseMsgContentViewController viewDidLoad called");
    
    if (orig_viewDidLoad) {
        ((void(*)(id, SEL))orig_viewDidLoad)(self, _cmd);
    }
    
    g_currentChatViewController = self;
    jokerLog(@"[Joker] Saved BaseMsgContentViewController instance");
}

static void hooked_viewWillDisappear(id self, SEL _cmd, BOOL animated) {
    jokerLog(@"[Joker] BaseMsgContentViewController viewWillDisappear called");
    
    if (g_currentChatViewController == self) {
        g_currentChatViewController = nil;
        g_currentCellView = nil;
        g_currentMsgWrap = nil;
        jokerLog(@"[Joker] ✅ Cleared all instances");
    }
    
    if (orig_viewWillDisappear) {
        ((void(*)(id, SEL, BOOL))orig_viewWillDisappear)(self, _cmd, animated);
    }
}

static void hooked_showMenuWithItems(id self, SEL _cmd, id items) {
    jokerLog([NSString stringWithFormat:@"[Joker] MMRichTextCoverView showMenuWithItems: called, items=%@", items]);

    if (!g_currentMsgWrap) {
        jokerLog(@"[Joker] g_currentMsgWrap is nil, trying to get from delegate");
        
        @try {
            id delegate = [self performSelector:@selector(delegate)];
            if (delegate) {
                jokerLog([NSString stringWithFormat:@"[Joker] delegate=%@, checking for msgWrap", NSStringFromClass([delegate class])]);
                
                g_currentCellView = delegate;
                jokerLog([NSString stringWithFormat:@"[Joker] Saved cell: %@", NSStringFromClass([g_currentCellView class])]);
                
                Ivar msgWrapIvar = class_getInstanceVariable([delegate class], "m_messageWrap");
                if (msgWrapIvar) {
                    g_currentMsgWrap = object_getIvar(delegate, msgWrapIvar);
                    jokerLog([NSString stringWithFormat:@"[Joker] Got msgWrap from delegate: %@", g_currentMsgWrap]);
                } else {
                    Ivar viewModelIvar = class_getInstanceVariable([delegate class], "m_viewModel");
                    if (viewModelIvar) {
                        id viewModel = object_getIvar(delegate, viewModelIvar);
                        if (viewModel) {
                            Ivar mwIvar = class_getInstanceVariable([viewModel class], "m_messageWrap");
                            if (mwIvar) {
                                g_currentMsgWrap = object_getIvar(viewModel, mwIvar);
                                jokerLog([NSString stringWithFormat:@"[Joker] Got msgWrap from viewModel: %@", g_currentMsgWrap]);
                            }
                        }
                    }
                }
            }
        } @catch (NSException *e) {
            jokerLog([NSString stringWithFormat:@"[Joker] Get msgWrap from delegate error: %@", e]);
        }
    }

    if (g_currentMsgWrap) {
        jokerLog(@"[Joker] Found saved msgWrap, adding '修改文字' to items");

        @try {
            Class menuItemClass = objc_getClass("MMMenuItem");
            if (menuItemClass) {
                SEL modifyAction = NSSelectorFromString(@"onModifyTextMenuItemClick:");
                SEL initWithTitleSel = NSSelectorFromString(@"initWithTitle:target:action:");
                id modifyItem = nil;
                if ([menuItemClass instancesRespondToSelector:initWithTitleSel]) {
                    modifyItem = ((id(*)(id, SEL, id, id, SEL))objc_msgSend)(
                        [[menuItemClass alloc] init], initWithTitleSel,
                        @"修改文字", self, modifyAction);
                }
                if (!modifyItem) {
                    modifyItem = [[menuItemClass alloc] init];
                    if (modifyItem) {
                        ((void(*)(id, SEL, id))objc_msgSend)(modifyItem, NSSelectorFromString(@"setTitle:"), @"修改文字");
                        ((void(*)(id, SEL, id))objc_msgSend)(modifyItem, NSSelectorFromString(@"setTarget:"), self);
                        ((void(*)(id, SEL, SEL))objc_msgSend)(modifyItem, NSSelectorFromString(@"setAction:"), modifyAction);
                    }
                }
                if (modifyItem) {
                    jokerLog([NSString stringWithFormat:@"[Joker] Created MMMenuItem: %@ with action: %@", modifyItem, NSStringFromSelector(modifyAction)]);

                    NSMutableArray *newItems = [NSMutableArray arrayWithArray:items];
                    [newItems addObject:modifyItem];
                    items = newItems;
                    jokerLog([NSString stringWithFormat:@"[Joker] Modified items: %@", items]);
                }
            } else {
                jokerLog(@"[Joker] MMMenuItem class NOT found");
            }
        } @catch (NSException *e) {
            jokerLog([NSString stringWithFormat:@"[Joker] Create MMMenuItem error: %@", e]);
        }
    } else {
        jokerLog(@"[Joker] No msgWrap available, skip adding button");
    }

    if (orig_showMenuWithItems) {
        ((void(*)(id, SEL, id))orig_showMenuWithItems)(self, _cmd, items);
    }
}

static void hooked_actionSheetClickedButtonAtIndex(id self, SEL _cmd, id actionSheet, NSInteger buttonIndex) {
    jokerLog([NSString stringWithFormat:@"[Joker] actionSheet:clickedButtonAtIndex: self=%@ actionSheet=%@ index=%ld",
             NSStringFromClass([self class]), NSStringFromClass([actionSheet class]), (long)buttonIndex]);

    NSString *buttonTitle = nil;
    @try {
        buttonTitle = [actionSheet performSelector:@selector(buttonTitleAtIndex:) withObject:@(buttonIndex)];
    } @catch (NSException *e) {}

    jokerLog([NSString stringWithFormat:@"[Joker] Button title: %@", buttonTitle]);

    if (buttonTitle && [buttonTitle isEqualToString:@"修改文字"] && g_currentMsgWrap) {
        jokerLog(@"[Joker] 修改文字 clicked");
        id msgWrap = g_currentMsgWrap;
        id cellView = g_currentCellView;
        g_currentMsgWrap = nil;
        g_currentCellView = nil;
        showEditDialog(msgWrap, cellView);
        return;
    }

    if (orig_actionSheetClickedButtonAtIndex) {
        ((void(*)(id, SEL, id, NSInteger))orig_actionSheetClickedButtonAtIndex)(self, _cmd, actionSheet, buttonIndex);
    }
}

@implementation JokerHook

+ (void)install {
    jokerLog(@"[JokerHook] ========== install start ==========");
    jokerLog([NSString stringWithFormat:@"[JokerHook] enableJoker=%d", [PluginConfig shared].enableJoker]);

    Class vcClass = objc_getClass("BaseMsgContentViewController");
    if (vcClass) {
        jokerLog(@"[JokerHook] BaseMsgContentViewController found");

        SEL willShowSel = NSSelectorFromString(@"willShowMenuController:inMsgWrap:");
        Method willShowMethod = class_getInstanceMethod(vcClass, willShowSel);
        if (willShowMethod) {
            orig_willShowMenuController = method_setImplementation(willShowMethod, (IMP)hooked_willShowMenuController);
            jokerLog(@"[JokerHook] willShowMenuController:inMsgWrap: hooked");
        } else {
            jokerLog(@"[JokerHook] willShowMenuController:inMsgWrap: NOT found");
        }

        SEL actionSheetSel = NSSelectorFromString(@"actionSheet:clickedButtonAtIndex:");
        Method actionSheetMethod = class_getInstanceMethod(vcClass, actionSheetSel);
        if (actionSheetMethod) {
            orig_actionSheetClickedButtonAtIndex = method_setImplementation(actionSheetMethod, (IMP)hooked_actionSheetClickedButtonAtIndex);
            jokerLog(@"[JokerHook] actionSheet:clickedButtonAtIndex: hooked");
        } else {
            jokerLog(@"[JokerHook] actionSheet:clickedButtonAtIndex: NOT found");
        }

        SEL viewDidLoadSel = NSSelectorFromString(@"viewDidLoad");
        Method viewDidLoadMethod = class_getInstanceMethod(vcClass, viewDidLoadSel);
        if (viewDidLoadMethod) {
            orig_viewDidLoad = method_setImplementation(viewDidLoadMethod, (IMP)hooked_viewDidLoad);
            jokerLog(@"[JokerHook] viewDidLoad hooked");
        }

        SEL viewWillDisappearSel = NSSelectorFromString(@"viewWillDisappear:");
        Method viewWillDisappearMethod = class_getInstanceMethod(vcClass, viewWillDisappearSel);
        if (viewWillDisappearMethod) {
            orig_viewWillDisappear = method_setImplementation(viewWillDisappearMethod, (IMP)hooked_viewWillDisappear);
            jokerLog(@"[JokerHook] viewWillDisappear: hooked");
        }

        jokerLog(@"[JokerHook] ========== install complete ==========");
    } else {
        jokerLog(@"[JokerHook] BaseMsgContentViewController class NOT found");
    }

    Class actionSheetClass = objc_getClass("MMScrollActionSheet");
    if (actionSheetClass) {
        jokerLog(@"[JokerHook] MMScrollActionSheet found");

        SEL showInViewSel = NSSelectorFromString(@"showInView:");
        Method showInViewMethod = class_getInstanceMethod(actionSheetClass, showInViewSel);
        if (showInViewMethod) {
            orig_scrollActionSheetShowInView = method_setImplementation(showInViewMethod, (IMP)hooked_scrollActionSheetShowInView);
            jokerLog(@"[JokerHook] MMScrollActionSheet.showInView: hooked");
        } else {
            jokerLog(@"[JokerHook] MMScrollActionSheet.showInView: NOT found");
        }

        SEL showInViewConstraintSel = NSSelectorFromString(@"showInView:isConstraintByParent:");
        Method showInViewConstraintMethod = class_getInstanceMethod(actionSheetClass, showInViewConstraintSel);
        if (showInViewConstraintMethod) {
            orig_scrollActionSheetShowInViewConstraint = method_setImplementation(showInViewConstraintMethod, (IMP)hooked_scrollActionSheetShowInViewConstraint);
            jokerLog(@"[JokerHook] MMScrollActionSheet.showInView:isConstraintByParent: hooked");
        } else {
            jokerLog(@"[JokerHook] MMScrollActionSheet.showInView:isConstraintByParent: NOT found");
        }
    } else {
        jokerLog(@"[JokerHook] MMScrollActionSheet class NOT found");
    }

    Class coverViewClass = objc_getClass("MMRichTextCoverView");
    if (coverViewClass) {
        jokerLog(@"[JokerHook] MMRichTextCoverView found");

        SEL modifyActionSel = NSSelectorFromString(@"onModifyTextMenuItemClick:");
        Method modifyMethod = class_getInstanceMethod(coverViewClass, modifyActionSel);
        if (!modifyMethod) {
            class_addMethod(coverViewClass, modifyActionSel, (IMP)onModifyTextMenuItemClick, "v@:@");
            jokerLog(@"[JokerHook] Added onModifyTextMenuItemClick: method to MMRichTextCoverView");
        }

        SEL showSelectMenuSel = NSSelectorFromString(@"showSelectMenu");
        Method showSelectMenuMethod = class_getInstanceMethod(coverViewClass, showSelectMenuSel);
        if (showSelectMenuMethod) {
            orig_showSelectMenu = method_setImplementation(showSelectMenuMethod, (IMP)hooked_showSelectMenu);
            jokerLog(@"[JokerHook] MMRichTextCoverView.showSelectMenu hooked");
        } else {
            jokerLog(@"[JokerHook] MMRichTextCoverView.showSelectMenu NOT found");
        }

        SEL showMenuWithItemsSel = NSSelectorFromString(@"showMenuWithItems:");
        Method showMenuWithItemsMethod = class_getInstanceMethod(coverViewClass, showMenuWithItemsSel);
        if (showMenuWithItemsMethod) {
            orig_showMenuWithItems = method_setImplementation(showMenuWithItemsMethod, (IMP)hooked_showMenuWithItems);
            jokerLog(@"[JokerHook] MMRichTextCoverView.showMenuWithItems: hooked");
        } else {
            jokerLog(@"[JokerHook] MMRichTextCoverView.showMenuWithItems: NOT found");
        }
    } else {
        jokerLog(@"[JokerHook] MMRichTextCoverView class NOT found");
    }
}

@end
