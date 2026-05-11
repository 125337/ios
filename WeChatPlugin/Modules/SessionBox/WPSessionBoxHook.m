#import "WPSessionBoxHook.h"
#import "../../Config/PluginConfig.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <UIKit/UIKit.h>

static NSMutableSet *g_hookedClasses = nil;
static NSMutableDictionary *g_origIMPs = nil;
static BOOL g_swipeGesturePatched = NO;
static BOOL g_installed = NO;

static void sbLog(NSString *format, ...) {
    va_list args; va_start(args, format);
    NSString *content = [[NSString alloc] initWithFormat:format arguments:args]; va_end(args);
    NSLog(@"[SessionBox] %@", content);
    @try {
        NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
        NSString *folderPath = [paths.firstObject stringByAppendingPathComponent:@"WeChatPlugin_Logs"];
        [[NSFileManager defaultManager] createDirectoryAtPath:folderPath withIntermediateDirectories:YES attributes:nil error:nil];
        NSString *filePath = [folderPath stringByAppendingPathComponent:@"sessionbox.log"];
        NSString *line = [NSString stringWithFormat:@"[%@] %@\n", [NSDate date], content];
        NSFileHandle *handle = [NSFileHandle fileHandleForWritingAtPath:filePath];
        if (handle) { [handle seekToEndOfFile]; [handle writeData:[line dataUsingEncoding:NSUTF8StringEncoding]]; [handle closeFile]; }
        else { [line writeToFile:filePath atomically:YES encoding:NSUTF8StringEncoding error:nil]; }
    } @catch (NSException *e) {}
}

static BOOL sb_anyFeatureEnabled(void) {
    PluginConfig *cfg = [PluginConfig shared];
    return cfg.quickPinEnabled || cfg.quickRemarkEnabled || cfg.quickMuteEnabled;
}

static BOOL sb_isSwipeActionGesture(UIGestureRecognizer *g){
    return strcmp(class_getName(object_getClass(g)), "_UISwipeActionPanGestureRecognizer") == 0;
}

static id sb_getService(Class sc) {
    Class scc = objc_getClass("MMServiceCenter"); if (!scc) return nil;
    id ctr = ((id(*)(id,SEL))objc_msgSend)(scc, NSSelectorFromString(@"defaultCenter")); if (!ctr) return nil;
    return ((id(*)(id,SEL,Class))objc_msgSend)(ctr, NSSelectorFromString(@"getService:"), sc);
}
static id sb_getContactMgr() { Class c=objc_getClass("CContactMgr"); return c?sb_getService(c):nil; }
static id sb_getSessionMgr() {
    const char *ns[]={"MMNewSessionMgr","CConversationMgr","CSessionMgr","MMSessionMgr","MainSessionMgr"};
    for(int i=0;i<5;i++){Class c=objc_getClass(ns[i]); if(c){id s=sb_getService(c); if(s)return s;}} return nil;
}

static NSString *sb_userNameFromDataSource(id ds, NSIndexPath *ip) {
    if(!ds||!ip)return nil; @try{
        SEL s1=NSSelectorFromString(@"getSessionInfoAtIndexPath:");
        if([ds respondsToSelector:s1]){id info=((id(*)(id,SEL,id))objc_msgSend)(ds,s1,ip);
            if(info){SEL s=NSSelectorFromString(@"m_nsUserName"); if([info respondsToSelector:s]){id n=((id(*)(id,SEL))objc_msgSend)(info,s); if([n isKindOfClass:[NSString class]]&&[n length])return n;}}}
        SEL cd=NSSelectorFromString(@"getCellData:");
        if([ds respondsToSelector:cd]){id cdv=((id(*)(id,SEL,id))objc_msgSend)(ds,cd,ip);
            if(cdv){SEL si=NSSelectorFromString(@"m_sessionInfo"); if([cdv respondsToSelector:si]){id sii=((id(*)(id,SEL))objc_msgSend)(cdv,si);
            if(sii){SEL s=NSSelectorFromString(@"m_nsUserName"); if([sii respondsToSelector:s]){id n=((id(*)(id,SEL))objc_msgSend)(sii,s); if([n isKindOfClass:[NSString class]]&&[n length])return n;}}}
            SEL in=NSSelectorFromString(@"m_cellData"); if([cdv respondsToSelector:in]){id inv=((id(*)(id,SEL))objc_msgSend)(cdv,in);
            if(inv){SEL s=NSSelectorFromString(@"m_nsUserName"); if([inv respondsToSelector:s]){id n=((id(*)(id,SEL))objc_msgSend)(inv,s); if([n isKindOfClass:[NSString class]]&&[n length])return n;}}}}}
        SEL s2=NSSelectorFromString(@"logicGetSessionAtIndexPath:");
        if([ds respondsToSelector:s2]){id info=((id(*)(id,SEL,id))objc_msgSend)(ds,s2,ip);
            if(info){SEL s=NSSelectorFromString(@"m_nsUserName"); if([info respondsToSelector:s]){id n=((id(*)(id,SEL))objc_msgSend)(info,s); if([n isKindOfClass:[NSString class]]&&[n length])return n;}}}
    }@catch(NSException *e){} return nil;
}

static BOOL sb_isSessionTop(NSString *un){id m=sb_getContactMgr(); if(!m)return NO;
    SEL s=NSSelectorFromString(@"getContactByName:"); if(![m respondsToSelector:s])s=NSSelectorFromString(@"getContactByNameFromCache:"); if(![m respondsToSelector:s])return NO;
    id c=((id(*)(id,SEL,id))objc_msgSend)(m,s,un); if(!c)return NO;
    SEL ts=NSSelectorFromString(@"isContactSessionTop"); if(![c respondsToSelector:ts])return NO; return((BOOL(*)(id,SEL))objc_msgSend)(c,ts);}
static BOOL sb_isSessionMuted(NSString *un){id m=sb_getContactMgr(); if(!m)return NO;
    SEL s=NSSelectorFromString(@"getContactByName:"); if(![m respondsToSelector:s])s=NSSelectorFromString(@"getContactByNameFromCache:"); if(![m respondsToSelector:s])return NO;
    id c=((id(*)(id,SEL,id))objc_msgSend)(m,s,un); if(!c)return NO;
    SEL ns=NSSelectorFromString(@"isChatStatusNotifyOpen"); if(![c respondsToSelector:ns])return NO; return!((BOOL(*)(id,SEL))objc_msgSend)(c,ns);}

static void sb_togglePin(NSString *un,BOOL top){id m=sb_getSessionMgr();
    if(!top){if(m&&[m respondsToSelector:NSSelectorFromString(@"TopSessionByName:")]) ((void(*)(id,SEL,id))objc_msgSend)(m,NSSelectorFromString(@"TopSessionByName:"),un);}
    else{if(m&&[m respondsToSelector:NSSelectorFromString(@"UntopSessionByName:")]) ((void(*)(id,SEL,id))objc_msgSend)(m,NSSelectorFromString(@"UntopSessionByName:"),un);}
    if(m&&[m respondsToSelector:NSSelectorFromString(@"resortSessions")]) ((void(*)(id,SEL))objc_msgSend)(m,NSSelectorFromString(@"resortSessions"));}
static void sb_toggleMute(NSString *un,BOOL muted){id m=sb_getContactMgr(); if(!m)return;
    if([m respondsToSelector:NSSelectorFromString(@"ChangeNotifyStatus:withStatus:sync:")]) ((void(*)(id,SEL,id,NSInteger,BOOL))objc_msgSend)(m,NSSelectorFromString(@"ChangeNotifyStatus:withStatus:sync:"),un,muted?1:0,YES);}
static void sb_showEditRemark(NSString *un){id mg=sb_getContactMgr(); if(!mg)return;
    SEL s=NSSelectorFromString(@"getContactByName:"); if(![mg respondsToSelector:s])s=NSSelectorFromString(@"getContactByNameFromCache:"); if(![mg respondsToSelector:s])return;
    id c=((id(*)(id,SEL,id))objc_msgSend)(mg,s,un); if(!c)return;
    NSString *cr=@""; if([c respondsToSelector:NSSelectorFromString(@"m_nsRemark")]){id r=((id(*)(id,SEL))objc_msgSend)(c,NSSelectorFromString(@"m_nsRemark")); if([r isKindOfClass:[NSString class]])cr=r;}
    NSString *nk=@""; if([c respondsToSelector:NSSelectorFromString(@"m_nsNickName")]){id n=((id(*)(id,SEL))objc_msgSend)(c,NSSelectorFromString(@"m_nsNickName")); if([n isKindOfClass:[NSString class]])nk=n;}
    dispatch_async(dispatch_get_main_queue(),^{
        UIAlertController *al=[UIAlertController alertControllerWithTitle:@"修改备注" message:[NSString stringWithFormat:@"当前昵称: %@",nk] preferredStyle:UIAlertControllerStyleAlert];
        [al addTextFieldWithConfigurationHandler:^(UITextField *tf){tf.text=cr;tf.placeholder=@"请输入备注名";}];
        __weak UIAlertController *wa=al;
        [al addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:^(UIAlertAction *a){NSString *nr=wa.textFields.firstObject.text?:@"";if([c respondsToSelector:NSSelectorFromString(@"setM_nsRemark:")]) ((void(*)(id,SEL,id))objc_msgSend)(c,NSSelectorFromString(@"setM_nsRemark:"),nr);if([mg respondsToSelector:NSSelectorFromString(@"modifyDataItem:notify:")]) ((void(*)(id,SEL,id,BOOL))objc_msgSend)(mg,NSSelectorFromString(@"modifyDataItem:notify:"),c,YES);id sm=sb_getSessionMgr();if(sm&&[sm respondsToSelector:NSSelectorFromString(@"updateMainSessionList")]) ((void(*)(id,SEL))objc_msgSend)(sm,NSSelectorFromString(@"updateMainSessionList"));}]];
        [al addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
        UIViewController *top=nil;for(UIWindow *w in[UIApplication sharedApplication].windows)if(w.isKeyWindow){top=w.rootViewController;break;}while(top.presentedViewController)top=top.presentedViewController;
        if(top)[top presentViewController:al animated:YES completion:nil];
    });}

#pragma mark - 前向声明
static UISwipeActionsConfiguration *sb_leadingSwipeActions(id s,SEL cmd,UITableView *tv,NSIndexPath *ip);
static BOOL sb_canEditRow(id s,SEL cmd,UITableView *tv,NSIndexPath *ip);
static UITableViewCellEditingStyle sb_editingStyle(id s,SEL cmd,UITableView *tv,NSIndexPath *ip);

#pragma mark - 注入 swipe 方法 (setDS/setDL)
static BOOL sb_injectSwipeMethods(Class cls,NSString *nm){
    if(!cls)return NO; NSString *n=NSStringFromClass(cls); if([g_hookedClasses containsObject:n])return NO;
    SEL ls=NSSelectorFromString(@"tableView:leadingSwipeActionsConfigurationForRowAtIndexPath:");
    Method lm=class_getInstanceMethod(cls,ls);
    if(lm){g_origIMPs[[n stringByAppendingString:@"_ls"]]=[NSValue valueWithPointer:method_getImplementation(lm)];method_setImplementation(lm,(IMP)sb_leadingSwipeActions);}
    else{class_addMethod(cls,ls,(IMP)sb_leadingSwipeActions,"@32@0:8@16@24");}
    SEL ce=NSSelectorFromString(@"tableView:canEditRowAtIndexPath:");
    Method cm=class_getInstanceMethod(cls,ce);
    if(cm){g_origIMPs[[n stringByAppendingString:@"_ce"]]=[NSValue valueWithPointer:method_getImplementation(cm)];method_setImplementation(cm,(IMP)sb_canEditRow);}
    else{class_addMethod(cls,ce,(IMP)sb_canEditRow,"B32@0:8@16@24");}
    SEL es=NSSelectorFromString(@"tableView:editingStyleForRowAtIndexPath:");
    Method em=class_getInstanceMethod(cls,es);
    if(em){g_origIMPs[[n stringByAppendingString:@"_es"]]=[NSValue valueWithPointer:method_getImplementation(em)];method_setImplementation(em,(IMP)sb_editingStyle);}
    else{class_addMethod(cls,es,(IMP)sb_editingStyle,"q32@0:8@16@24");}
    [g_hookedClasses addObject:n]; sbLog(@"[inject] ✓ swipe methods on %@",n); return YES;
}

#pragma mark - canEdit / editingStyle / leadingSwipe
static BOOL sb_canEditRow(id s,SEL cmd,UITableView *tv,NSIndexPath *ip){
    if(sb_anyFeatureEnabled()){NSString *un=sb_userNameFromDataSource(s,ip); if(un.length)return YES;}
    NSString *k=[NSStringFromClass([s class]) stringByAppendingString:@"_ce"]; NSValue *v=g_origIMPs[k]; if(v)return((BOOL(*)(id,SEL,id,id))[v pointerValue])(s,cmd,tv,ip); return NO;}
static UITableViewCellEditingStyle sb_editingStyle(id s,SEL cmd,UITableView *tv,NSIndexPath *ip){
    NSString *k=[NSStringFromClass([s class]) stringByAppendingString:@"_es"]; NSValue *v=g_origIMPs[k];
    UITableViewCellEditingStyle o=UITableViewCellEditingStyleNone; if(v)o=((UITableViewCellEditingStyle(*)(id,SEL,id,id))[v pointerValue])(s,cmd,tv,ip);
    if(sb_anyFeatureEnabled()&&o==UITableViewCellEditingStyleNone){NSString *un=sb_userNameFromDataSource(s,ip); if(un.length)return UITableViewCellEditingStyleDelete;} return o;}
static UISwipeActionsConfiguration *sb_leadingSwipeActions(id s,SEL cmd,UITableView *tv,NSIndexPath *ip){
    NSMutableArray *acts=[NSMutableArray array]; NSString *un=sb_userNameFromDataSource(s,ip);
    if(un.length){PluginConfig *cfg=[PluginConfig shared];
        if(cfg.quickPinEnabled){BOOL t=sb_isSessionTop(un);UIContextualAction *a=[UIContextualAction contextualActionWithStyle:UIContextualActionStyleNormal title:t?@"取消置顶":@"置顶" handler:^(UIContextualAction *_,UIView *__,void(^d)(BOOL)){sb_togglePin(un,t);d(YES);}];a.backgroundColor=[UIColor colorWithRed:0.0 green:0.48 blue:1.0 alpha:1.0];[acts addObject:a];}
        if(cfg.quickRemarkEnabled){UIContextualAction *a=[UIContextualAction contextualActionWithStyle:UIContextualActionStyleNormal title:@"备注" handler:^(UIContextualAction *_,UIView *__,void(^d)(BOOL)){sb_showEditRemark(un);d(YES);}];a.backgroundColor=[UIColor colorWithRed:1.0 green:0.58 blue:0.0 alpha:1.0];[acts addObject:a];}
        if(cfg.quickMuteEnabled){BOOL m=sb_isSessionMuted(un);UIContextualAction *a=[UIContextualAction contextualActionWithStyle:UIContextualActionStyleNormal title:m?@"取消免打扰":@"免打扰" handler:^(UIContextualAction *_,UIView *__,void(^d)(BOOL)){sb_toggleMute(un,m);d(YES);}];a.backgroundColor=[UIColor colorWithRed:0.55 green:0.0 blue:0.85 alpha:1.0];[acts addObject:a];}}
    if(acts.count){UISwipeActionsConfiguration *c=[UISwipeActionsConfiguration configurationWithActions:acts];c.performsFirstActionWithFullSwipe=NO;return c;} return nil;}

#pragma mark - UIGestureRecognizerDelegate (完整覆盖)
static BOOL sb_orig_gestureShouldBegin(id self, SEL _cmd, UIGestureRecognizer *g){
    NSString *cn = NSStringFromClass(object_getClass(self));
    NSValue *v = g_origIMPs[[cn stringByAppendingString:@"_gsb"]];
    if(v) return ((BOOL(*)(id,SEL,id))[v pointerValue])(self, _cmd, g);
    return YES;
}
static BOOL sb_gestureShouldBegin(id self, SEL _cmd, UIGestureRecognizer *gesture){
    BOOL result = sb_orig_gestureShouldBegin(self, _cmd, gesture);
    if(sb_anyFeatureEnabled() && !result && sb_isSwipeActionGesture(gesture)) return YES;
    return result;
}
static BOOL sb_orig_shouldRecognizeSimultaneously(id self, SEL _cmd, UIGestureRecognizer *g1, UIGestureRecognizer *g2){
    NSString *cn = NSStringFromClass(object_getClass(self));
    NSValue *v = g_origIMPs[[cn stringByAppendingString:@"_srs"]];
    if(v) return ((BOOL(*)(id,SEL,id,id))[v pointerValue])(self, _cmd, g1, g2);
    return NO;
}
static BOOL sb_shouldRecognizeSimultaneously(id self, SEL _cmd, UIGestureRecognizer *g1, UIGestureRecognizer *g2){
    if(sb_anyFeatureEnabled() && (sb_isSwipeActionGesture(g1) || sb_isSwipeActionGesture(g2))) return YES;
    return sb_orig_shouldRecognizeSimultaneously(self, _cmd, g1, g2);
}
static BOOL sb_orig_shouldRequireFailure(id self, SEL _cmd, UIGestureRecognizer *g){
    NSString *cn = NSStringFromClass(object_getClass(self));
    NSValue *v = g_origIMPs[[cn stringByAppendingString:@"_srf"]];
    if(v) return ((BOOL(*)(id,SEL,id))[v pointerValue])(self, _cmd, g);
    return NO;
}
static BOOL sb_shouldRequireFailure(id self, SEL _cmd, UIGestureRecognizer *g){
    if(sb_anyFeatureEnabled() && sb_isSwipeActionGesture(g)) return NO;
    return sb_orig_shouldRequireFailure(self, _cmd, g);
}
static BOOL sb_orig_shouldBeRequiredToFail(id self, SEL _cmd, UIGestureRecognizer *g){
    NSString *cn = NSStringFromClass(object_getClass(self));
    NSValue *v = g_origIMPs[[cn stringByAppendingString:@"_sbrf"]];
    if(v) return ((BOOL(*)(id,SEL,id))[v pointerValue])(self, _cmd, g);
    return NO;
}
static BOOL sb_shouldBeRequiredToFail(id self, SEL _cmd, UIGestureRecognizer *g){
    if(sb_anyFeatureEnabled() && sb_isSwipeActionGesture(g)) return NO;
    return sb_orig_shouldBeRequiredToFail(self, _cmd, g);
}
static BOOL sb_orig_shouldReceiveTouch(id self, SEL _cmd, UITouch *touch){
    NSString *cn = NSStringFromClass(object_getClass(self));
    NSValue *v = g_origIMPs[[cn stringByAppendingString:@"_srt"]];
    if(v) return ((BOOL(*)(id,SEL,id))[v pointerValue])(self, _cmd, touch);
    return YES;
}
static BOOL sb_shouldReceiveTouch(id self, SEL _cmd, UITouch *touch){
    return sb_orig_shouldReceiveTouch(self, _cmd, touch);
}

static void sb_hookGestureDelegateMethods(Class tvClass){
    NSString *cn = NSStringFromClass(tvClass);
    NSString *k;
    k=[cn stringByAppendingString:@"_gsb"];if(!g_origIMPs[k]){Method m=class_getInstanceMethod(tvClass,@selector(gestureRecognizerShouldBegin:));if(m){g_origIMPs[k]=[NSValue valueWithPointer:method_getImplementation(m)];method_setImplementation(m,(IMP)sb_gestureShouldBegin);sbLog(@"[hookDD] ✓ gsb %@",cn);}}
    k=[cn stringByAppendingString:@"_srs"];if(!g_origIMPs[k]){SEL sel=@selector(gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:);Method m=class_getInstanceMethod(tvClass,sel);if(m){g_origIMPs[k]=[NSValue valueWithPointer:method_getImplementation(m)];method_setImplementation(m,(IMP)sb_shouldRecognizeSimultaneously);}else{class_addMethod(tvClass,sel,(IMP)sb_shouldRecognizeSimultaneously,"B32@0:8@16@24");}sbLog(@"[hookDD] ✓ srs %@",cn);}
    k=[cn stringByAppendingString:@"_srf"];if(!g_origIMPs[k]){SEL sel=@selector(gestureRecognizer:shouldRequireFailureOfGestureRecognizer:);Method m=class_getInstanceMethod(tvClass,sel);if(m){g_origIMPs[k]=[NSValue valueWithPointer:method_getImplementation(m)];method_setImplementation(m,(IMP)sb_shouldRequireFailure);}else{class_addMethod(tvClass,sel,(IMP)sb_shouldRequireFailure,"B32@0:8@16@24");}sbLog(@"[hookDD] ✓ srf %@",cn);}
    k=[cn stringByAppendingString:@"_sbrf"];if(!g_origIMPs[k]){SEL sel=@selector(gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:);Method m=class_getInstanceMethod(tvClass,sel);if(m){g_origIMPs[k]=[NSValue valueWithPointer:method_getImplementation(m)];method_setImplementation(m,(IMP)sb_shouldBeRequiredToFail);}else{class_addMethod(tvClass,sel,(IMP)sb_shouldBeRequiredToFail,"B32@0:8@16@24");}sbLog(@"[hookDD] ✓ sbrf %@",cn);}
    k=[cn stringByAppendingString:@"_srt"];if(!g_origIMPs[k]){SEL sel=@selector(gestureRecognizer:shouldReceiveTouch:);Method m=class_getInstanceMethod(tvClass,sel);if(m){g_origIMPs[k]=[NSValue valueWithPointer:method_getImplementation(m)];method_setImplementation(m,(IMP)sb_shouldReceiveTouch);}sbLog(@"[hookDD] ✓ srt %@",cn);}
}

#pragma mark - translationInView / velocityInView 放大
static IMP g_origTranslationInView = NULL;
static IMP g_origVelocityInView = NULL;
static CGPoint sb_amplifiedTranslationInView(id self, SEL _cmd, UIView *view){
    CGPoint pt = ((CGPoint(*)(id,SEL,UIView*))g_origTranslationInView)(self, _cmd, view);
    pt.x *= 8.0;
    return pt;
}
static CGPoint sb_amplifiedVelocityInView(id self, SEL _cmd, UIView *view){
    CGPoint pt = ((CGPoint(*)(id,SEL,UIView*))g_origVelocityInView)(self, _cmd, view);
    pt.x *= 8.0;
    return pt;
}
static void sb_patchSwipeGestureClass(Class gc){
    if(g_swipeGesturePatched) return; g_swipeGesturePatched = YES;
    SEL tiv = @selector(translationInView:); Method m = class_getInstanceMethod(gc, tiv);
    if(m){g_origTranslationInView=method_getImplementation(m);const char *types=method_getTypeEncoding(m);
        if(!class_addMethod(gc,tiv,(IMP)sb_amplifiedTranslationInView,types)){method_setImplementation(m,(IMP)sb_amplifiedTranslationInView);}}
    SEL viv = @selector(velocityInView:); m = class_getInstanceMethod(gc, viv);
    if(m){g_origVelocityInView=method_getImplementation(m);const char *types=method_getTypeEncoding(m);
        if(!class_addMethod(gc,viv,(IMP)sb_amplifiedVelocityInView,types)){method_setImplementation(m,(IMP)sb_amplifiedVelocityInView);}}
    sbLog(@"[patchGR] ✓ translationInView/velocityInView 8x");
}

#pragma mark - setDelaysTouchesBegan
static void(*orig_setDTB)(UIGestureRecognizer*, SEL, BOOL) = NULL;
static void replaced_setDTB(UIGestureRecognizer *self, SEL _cmd, BOOL v){if(orig_setDTB) orig_setDTB(self, _cmd, NO);}

#pragma mark - setDirectionalLockEnabled
static void(*orig_setDLE)(id, SEL, BOOL) = NULL;
static void replaced_setDLE(id self, SEL _cmd, BOOL v){if(orig_setDLE) orig_setDLE(self, _cmd, NO);}

#pragma mark - setPerformsFirstActionWithFullSwipe
static void(*orig_setPFAWFS)(id, SEL, BOOL) = NULL;
static void replaced_setPFAWFS(id self, SEL _cmd, BOOL v){if(orig_setPFAWFS) orig_setPFAWFS(self, _cmd, NO);}

#pragma mark - setForbidDisplayMenuWithGestures
static void(*orig_setFDMWG)(id, SEL, BOOL) = NULL;
static void replaced_setFDMWG(id self, SEL _cmd, BOOL v){if(sb_anyFeatureEnabled()){if(orig_setFDMWG) orig_setFDMWG(self, _cmd, NO);return;}if(orig_setFDMWG) orig_setFDMWG(self, _cmd, v);}

#pragma mark - setMultiplexEnabled
static void(*orig_setME)(id, SEL, BOOL) = NULL;
static void replaced_setME(id self, SEL _cmd, BOOL v){if(sb_anyFeatureEnabled()){if(orig_setME) orig_setME(self, _cmd, NO);return;}if(orig_setME) orig_setME(self, _cmd, v);}

#pragma mark - setIsAddGesture
static void(*orig_setIAG)(id, SEL, BOOL) = NULL;
static void replaced_setIAG(id self, SEL _cmd, BOOL v){if(sb_anyFeatureEnabled()){if(orig_setIAG) orig_setIAG(self, _cmd, YES);return;}if(orig_setIAG) orig_setIAG(self, _cmd, v);}

#pragma mark - setMIsSessionGesture
static void(*orig_setMISG)(id, SEL, BOOL) = NULL;
static void replaced_setMISG(id self, SEL _cmd, BOOL v){if(sb_anyFeatureEnabled()){if(orig_setMISG) orig_setMISG(self, _cmd, YES);return;}if(orig_setMISG) orig_setMISG(self, _cmd, v);}

#pragma mark - setM_bInteractivePopEnabled
static void(*orig_setM_bIPE)(id, SEL, BOOL) = NULL;
static void replaced_setM_bIPE(id self, SEL _cmd, BOOL v){if(sb_anyFeatureEnabled()){if(orig_setM_bIPE) orig_setM_bIPE(self, _cmd, NO);return;}if(orig_setM_bIPE) orig_setM_bIPE(self, _cmd, v);}

#pragma mark - setNeedEditState
static void(*orig_setNES)(id, SEL, BOOL) = NULL;
static void replaced_setNES(id self, SEL _cmd, BOOL v){if(sb_anyFeatureEnabled()){if(orig_setNES) orig_setNES(self, _cmd, YES);return;}if(orig_setNES) orig_setNES(self, _cmd, v);}

#pragma mark - setBUsePanCancelGesture
static void(*orig_setBUPCG)(id, SEL, BOOL) = NULL;
static void replaced_setBUPCG(id self, SEL _cmd, BOOL v){if(sb_anyFeatureEnabled()){if(orig_setBUPCG) orig_setBUPCG(self, _cmd, NO);return;}if(orig_setBUPCG) orig_setBUPCG(self, _cmd, v);}

#pragma mark - setEnableEdgeSlideToClose
static void(*orig_setEESTC)(id, SEL, BOOL) = NULL;
static void replaced_setEESTC(id self, SEL _cmd, BOOL v){if(sb_anyFeatureEnabled()){if(orig_setEESTC) orig_setEESTC(self, _cmd, NO);return;}if(orig_setEESTC) orig_setEESTC(self, _cmd, v);}

#pragma mark - setChatBoxTopInList
static void(*orig_setCBTIL)(id, SEL, NSInteger) = NULL;
static void replaced_setCBTIL(id self, SEL _cmd, NSInteger v){if(sb_anyFeatureEnabled()){if(orig_setCBTIL) orig_setCBTIL(self, _cmd, 0);return;}if(orig_setCBTIL) orig_setCBTIL(self, _cmd, v);}

#pragma mark - hook helper
static void sb_hookSel(Class cls, SEL sel, IMP newImp, IMP *origImp){
    Method m = class_getInstanceMethod(cls, sel);
    if(!m) return;
    *origImp = method_getImplementation(m);
    method_setImplementation(m, newImp);
}

static NSInteger(*orig_checkES)(id, SEL) = NULL;
static NSInteger sb_checkEditingStyle(id self, SEL _cmd){
    if(sb_anyFeatureEnabled()) return 1;
    if(orig_checkES) return orig_checkES(self, _cmd);
    return 0;
}

static void(*orig_onCommitES)(id, SEL, NSInteger, id) = NULL;
static void sb_onCommitEditing(id self, SEL _cmd, NSInteger style, id tv){
    if(sb_anyFeatureEnabled()) return;
    if(orig_onCommitES) orig_onCommitES(self, _cmd, style, tv);
}

#pragma mark - setTableViewManager
static void(*orig_setTVM)(id, SEL, id) = NULL;
static void replaced_setTVM(id self, SEL _cmd, id mgr){
    if(orig_setTVM) orig_setTVM(self, _cmd, mgr);
    if(!sb_anyFeatureEnabled() || !mgr) return;
    Class mgrClass = object_getClass(mgr);
    SEL ces = NSSelectorFromString(@"checkTableViewEditingStyle");
    if([mgr respondsToSelector:ces]) sb_hookSel(mgrClass, ces, (IMP)sb_checkEditingStyle, (IMP*)&orig_checkES);
    SEL oc = NSSelectorFromString(@"onCommitEditingWithStyle:tableView:");
    Method m = class_getInstanceMethod(mgrClass, oc);
    if(m && !g_origIMPs[@"_tvm_oces"]){g_origIMPs[@"_tvm_oces"]=[NSValue valueWithPointer:method_getImplementation(m)];method_setImplementation(m,(IMP)sb_onCommitEditing);sbLog(@"[hookTVM] ✓ onCommitEditingStyle on %@",NSStringFromClass(mgrClass));}
}

#pragma mark - scrollViewWillEndDragging (阻止 deceleration 关闭 editing 模式)
static void(*orig_svWED)(id, SEL, UIScrollView*, CGPoint, CGPoint*) = NULL;
static void sb_svWillEndDragging(id self, SEL _cmd, UIScrollView *sv, CGPoint velocity, CGPoint *targetContentOffset){
    if(sb_anyFeatureEnabled()){
        *targetContentOffset = sv.contentOffset; // 阻止惯性滚动
    }
    if(orig_svWED) orig_svWED(self, _cmd, sv, velocity, targetContentOffset);
}

#pragma mark - handlelongGesture
static void(*orig_handleLG)(id, SEL, id) = NULL;
static void replaced_handleLG(id self, SEL _cmd, id gesture){
    if(!sb_anyFeatureEnabled()){if(orig_handleLG) orig_handleLG(self, _cmd, gesture);}
}

#pragma mark - messageWasSwiped
static void(*orig_mws)(id, SEL, id) = NULL;
static void replaced_mws(id self, SEL _cmd, id info){if(orig_mws) orig_mws(self, _cmd, info);}

#pragma mark - onMultiplex
static void(*orig_onMultiplex)(id, SEL) = NULL;
static void replaced_onMultiplex(id self, SEL _cmd){if(!sb_anyFeatureEnabled() && orig_onMultiplex) orig_onMultiplex(self, _cmd);}

#pragma mark - addGestureRecognizer
static void (*orig_addGR)(id, SEL, id) = NULL;
static void replaced_addGR(id self, SEL _cmd, id gesture){
    if(orig_addGR) orig_addGR(self, _cmd, gesture);
    const char *gcn = class_getName(object_getClass(gesture));
    if(strcmp(gcn, "_UISwipeActionPanGestureRecognizer") != 0) return;
    if(!sb_anyFeatureEnabled()) return;
    Class gc = object_getClass(gesture);
    sb_patchSwipeGestureClass(gc);
    UIGestureRecognizer *g = (UIGestureRecognizer *)gesture;
    g.delaysTouchesBegan = NO;
    g.cancelsTouchesInView = NO;
    SEL ssg = NSSelectorFromString(@"settingSessionGesture:");
    if([self respondsToSelector:ssg]) ((void(*)(id,SEL))objc_msgSend)(self, ssg);
    SEL smisg = NSSelectorFromString(@"setMIsSessionGesture:");
    if([self respondsToSelector:smisg]) ((void(*)(id,SEL,BOOL))objc_msgSend)(self, smisg, YES);
    sb_hookGestureDelegateMethods(object_getClass(self));
    sbLog(@"[addGR] ✓ %@", NSStringFromClass(object_getClass(self)));
}

#pragma mark - setDS/setDL/setAMS
static void(*orig_setDS)(id,SEL,id)=NULL; static void replaced_setDS(id s,SEL c,id d){if(orig_setDS)orig_setDS(s,c,d);if(d)sb_injectSwipeMethods(object_getClass(d),nil);}
static void(*orig_setDL)(id,SEL,id)=NULL; static void replaced_setDL(id s,SEL c,id d){if(orig_setDL)orig_setDL(s,c,d);if(d)sb_injectSwipeMethods(object_getClass(d),nil);}
static void(*orig_setAMS)(id,SEL,BOOL)=NULL; static void replaced_setAMS(id s,SEL c,BOOL v){if(sb_anyFeatureEnabled()){if(orig_setAMS)orig_setAMS(s,c,NO);return;}if(orig_setAMS)orig_setAMS(s,c,v);}

#pragma mark - viewWillAppear
static void(*orig_vwa)(id,SEL,BOOL)=NULL;
static void replaced_vwa(id self,SEL _cmd,BOOL animated){
    if(orig_vwa)orig_vwa(self,_cmd,animated); if(!sb_anyFeatureEnabled())return;
    UITableView *tv=nil; SEL vs=NSSelectorFromString(@"tableView"); if([self respondsToSelector:vs])tv=((id(*)(id,SEL))objc_msgSend)(self,vs);
    if(!tv||![tv isKindOfClass:[UITableView class]]){for(UIView *sv in((UIView*)((id(*)(id,SEL))objc_msgSend)(self,@selector(view))).subviews)if([sv isKindOfClass:[UITableView class]]){tv=(UITableView*)sv;break;}}
    if(!tv)return;
    tv.panGestureRecognizer.enabled=YES;
    tv.allowsMultipleSelectionDuringEditing=NO;
    tv.directionalLockEnabled=NO;
    SEL fdmwg=NSSelectorFromString(@"setForbidDisplayMenuWithGestures:");
    if([tv respondsToSelector:fdmwg])((void(*)(id,SEL,BOOL))objc_msgSend)(tv,fdmwg,NO);
    SEL me=NSSelectorFromString(@"setMultiplexEnabled:");
    if([tv respondsToSelector:me])((void(*)(id,SEL,BOOL))objc_msgSend)(tv,me,NO);
    SEL iag=NSSelectorFromString(@"setIsAddGesture:");
    if([tv respondsToSelector:iag])((void(*)(id,SEL,BOOL))objc_msgSend)(tv,iag,YES);
    SEL misg=NSSelectorFromString(@"setMIsSessionGesture:");
    if([tv respondsToSelector:misg])((void(*)(id,SEL,BOOL))objc_msgSend)(tv,misg,YES);
    SEL nes=NSSelectorFromString(@"setNeedEditState:");
    if([tv respondsToSelector:nes])((void(*)(id,SEL,BOOL))objc_msgSend)(tv,nes,YES);
    SEL bupcg=NSSelectorFromString(@"setBUsePanCancelGesture:");
    if([tv respondsToSelector:bupcg])((void(*)(id,SEL,BOOL))objc_msgSend)(tv,bupcg,NO);
    SEL eestc=NSSelectorFromString(@"setEnableEdgeSlideToClose:");
    if([tv respondsToSelector:eestc])((void(*)(id,SEL,BOOL))objc_msgSend)(tv,eestc,NO);
    SEL cbtil=NSSelectorFromString(@"setChatBoxTopInList:");
    if([tv respondsToSelector:cbtil])((void(*)(id,SEL,NSInteger))objc_msgSend)(tv,cbtil,0);
    sbLog(@"[vwa] tv=%@",NSStringFromClass([tv class]));
}

#pragma mark - install
@implementation WPSessionBoxHook
+ (void)install{
    if(g_installed) return;
    g_installed = YES;
    g_hookedClasses=[NSMutableSet set]; g_origIMPs=[NSMutableDictionary dictionary];
    sbLog(@"[install] === START (v17: all missing MiYou hooks) ===");
    Method m;
    
    m=class_getInstanceMethod([UITableView class],@selector(setDataSource:));
    if(m){orig_setDS=(void(*)(id,SEL,id))method_getImplementation(m);method_setImplementation(m,(IMP)replaced_setDS);}
    m=class_getInstanceMethod([UITableView class],@selector(setDelegate:));
    if(m){orig_setDL=(void(*)(id,SEL,id))method_getImplementation(m);method_setImplementation(m,(IMP)replaced_setDL);}
    m=class_getInstanceMethod([UITableView class],@selector(setAllowsMultipleSelection:));
    if(m){orig_setAMS=(void(*)(id,SEL,BOOL))method_getImplementation(m);method_setImplementation(m,(IMP)replaced_setAMS);}
    m=class_getInstanceMethod([UITableView class],@selector(addGestureRecognizer:));
    if(m){orig_addGR=(void(*)(id,SEL,id))method_getImplementation(m);method_setImplementation(m,(IMP)replaced_addGR);}
    
    sb_hookSel([UIGestureRecognizer class], @selector(setDelaysTouchesBegan:), (IMP)replaced_setDTB, (IMP*)&orig_setDTB);
    sb_hookSel([UIScrollView class], @selector(setDirectionalLockEnabled:), (IMP)replaced_setDLE, (IMP*)&orig_setDLE);
    sb_hookSel([UISwipeActionsConfiguration class], @selector(setPerformsFirstActionWithFullSwipe:), (IMP)replaced_setPFAWFS, (IMP*)&orig_setPFAWFS);
    
    Class nmvc=objc_getClass("NewMainFrameViewController");
    if(nmvc){
        m=class_getInstanceMethod(nmvc,@selector(viewWillAppear:));
        if(m){orig_vwa=(void(*)(id,SEL,BOOL))method_getImplementation(m);method_setImplementation(m,(IMP)replaced_vwa);}
        sb_hookSel(nmvc, NSSelectorFromString(@"setNeedEditState:"), (IMP)replaced_setNES, (IMP*)&orig_setNES);
        sb_hookSel(nmvc, NSSelectorFromString(@"setForbidDisplayMenuWithGestures:"), (IMP)replaced_setFDMWG, (IMP*)&orig_setFDMWG);
        sb_hookSel(nmvc, NSSelectorFromString(@"setMultiplexEnabled:"), (IMP)replaced_setME, (IMP*)&orig_setME);
        sb_hookSel(nmvc, NSSelectorFromString(@"setIsAddGesture:"), (IMP)replaced_setIAG, (IMP*)&orig_setIAG);
        sb_hookSel(nmvc, NSSelectorFromString(@"setMIsSessionGesture:"), (IMP)replaced_setMISG, (IMP*)&orig_setMISG);
        sb_hookSel(nmvc, NSSelectorFromString(@"setM_bInteractivePopEnabled:"), (IMP)replaced_setM_bIPE, (IMP*)&orig_setM_bIPE);
        // new hooks
        sb_hookSel(nmvc, NSSelectorFromString(@"setBUsePanCancelGesture:"), (IMP)replaced_setBUPCG, (IMP*)&orig_setBUPCG);
        sb_hookSel(nmvc, NSSelectorFromString(@"setEnableEdgeSlideToClose:"), (IMP)replaced_setEESTC, (IMP*)&orig_setEESTC);
        sb_hookSel(nmvc, NSSelectorFromString(@"setChatBoxTopInList:"), (IMP)replaced_setCBTIL, (IMP*)&orig_setCBTIL);
        sb_hookSel(nmvc, NSSelectorFromString(@"setTableViewManager:"), (IMP)replaced_setTVM, (IMP*)&orig_setTVM);
        SEL svWED = @selector(scrollViewWillEndDragging:withVelocity:targetContentOffset:);
        Method sm = class_getInstanceMethod(nmvc, svWED);
        if(sm){orig_svWED=(void(*)(id,SEL,UIScrollView*,CGPoint,CGPoint*))method_getImplementation(sm);method_setImplementation(sm,(IMP)sb_svWillEndDragging);sbLog(@"[hookSV] ✓ scrollViewWillEndDragging on %@",NSStringFromClass(nmvc));}
        SEL hlgs = NSSelectorFromString(@"handlelongGesture:");
        m = class_getInstanceMethod(nmvc, hlgs);
        if(m){orig_handleLG=(void(*)(id,SEL,id))method_getImplementation(m);method_setImplementation(m,(IMP)replaced_handleLG);sbLog(@"[hookLG] ✓ handlelongGesture on %@",NSStringFromClass(nmvc));}
        SEL mws = NSSelectorFromString(@"messageWasSwiped:");
        m = class_getInstanceMethod(nmvc, mws);
        if(m){orig_mws=(void(*)(id,SEL,id))method_getImplementation(m);method_setImplementation(m,(IMP)replaced_mws);sbLog(@"[hookMWS] ✓ messageWasSwiped on %@",NSStringFromClass(nmvc));}
    }
    
    Class mftv = objc_getClass("MainFrameTableView");
    if(mftv){
        sb_hookSel(mftv, NSSelectorFromString(@"setNeedEditState:"), (IMP)replaced_setNES, (IMP*)&orig_setNES);
        sb_hookSel(mftv, NSSelectorFromString(@"setForbidDisplayMenuWithGestures:"), (IMP)replaced_setFDMWG, (IMP*)&orig_setFDMWG);
        sb_hookSel(mftv, NSSelectorFromString(@"setMultiplexEnabled:"), (IMP)replaced_setME, (IMP*)&orig_setME);
        sb_hookSel(mftv, NSSelectorFromString(@"setIsAddGesture:"), (IMP)replaced_setIAG, (IMP*)&orig_setIAG);
        sb_hookSel(mftv, NSSelectorFromString(@"setMIsSessionGesture:"), (IMP)replaced_setMISG, (IMP*)&orig_setMISG);
        sb_hookSel(mftv, NSSelectorFromString(@"setBUsePanCancelGesture:"), (IMP)replaced_setBUPCG, (IMP*)&orig_setBUPCG);
        sb_hookSel(mftv, NSSelectorFromString(@"setEnableEdgeSlideToClose:"), (IMP)replaced_setEESTC, (IMP*)&orig_setEESTC);
        SEL onmx = NSSelectorFromString(@"onMultiplex:");
        Method om = class_getInstanceMethod(mftv, onmx);
        if(om){orig_onMultiplex=(void(*)(id,SEL))method_getImplementation(om);method_setImplementation(om,(IMP)replaced_onMultiplex);sbLog(@"[hookOM] ✓ onMultiplex on %@",NSStringFromClass(mftv));}
    }
    
    Class mmtv = objc_getClass("MMTableView");
    if(mmtv){
        sb_hookSel(mmtv, NSSelectorFromString(@"setNeedEditState:"), (IMP)replaced_setNES, (IMP*)&orig_setNES);
        sb_hookSel(mmtv, NSSelectorFromString(@"setForbidDisplayMenuWithGestures:"), (IMP)replaced_setFDMWG, (IMP*)&orig_setFDMWG);
        sb_hookSel(mmtv, NSSelectorFromString(@"setMultiplexEnabled:"), (IMP)replaced_setME, (IMP*)&orig_setME);
        sb_hookSel(mmtv, NSSelectorFromString(@"setIsAddGesture:"), (IMP)replaced_setIAG, (IMP*)&orig_setIAG);
        sb_hookSel(mmtv, NSSelectorFromString(@"setMIsSessionGesture:"), (IMP)replaced_setMISG, (IMP*)&orig_setMISG);
        sb_hookSel(mmtv, NSSelectorFromString(@"setBUsePanCancelGesture:"), (IMP)replaced_setBUPCG, (IMP*)&orig_setBUPCG);
        sb_hookSel(mmtv, NSSelectorFromString(@"setEnableEdgeSlideToClose:"), (IMP)replaced_setEESTC, (IMP*)&orig_setEESTC);
    }
    
    sbLog(@"[install] === COMPLETE ===");
}
@end