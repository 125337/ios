#import "WPSessionBoxHook.h"
#import "../../Config/PluginConfig.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <UIKit/UIKit.h>

static NSMutableSet *g_hookedClasses = nil;
static NSMutableDictionary *g_origIMPs = nil;
static BOOL g_swipeGesturePatched = NO;

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

#pragma mark - gestureRecognizerShouldBegin (per-class override)
static BOOL sb_orig_gestureShouldBegin(id self, SEL _cmd, UIGestureRecognizer *g){
    NSString *cn = NSStringFromClass(object_getClass(self));
    NSString *k = [cn stringByAppendingString:@"_gsb"];
    NSValue *v = g_origIMPs[k];
    if(v) return ((BOOL(*)(id,SEL,id))[v pointerValue])(self, _cmd, g);
    return YES;
}

static BOOL sb_gestureShouldBegin(id self, SEL _cmd, UIGestureRecognizer *gesture){
    BOOL result = sb_orig_gestureShouldBegin(self, _cmd, gesture);
    if(sb_anyFeatureEnabled() && !result){
        const char *gcn = class_getName(object_getClass(gesture));
        if(strcmp(gcn, "_UISwipeActionPanGestureRecognizer") == 0){
            return YES;
        }
    }
    return result;
}

static void sb_hookGestureShouldBegin(Class tvClass){
    NSString *cn = NSStringFromClass(tvClass);
    // 检查是否已经 hook 了这个类（不会是 KVO 类）
    NSString *k = [cn stringByAppendingString:@"_gsb"];
    if(g_origIMPs[k]) return;
    
    // 获取 tableView 的 delegate 方法类
    // tableView 的 delegate 协议方法直接从类查找
    SEL sel = @selector(gestureRecognizerShouldBegin:);
    Method m = class_getInstanceMethod(tvClass, sel);
    if(!m) return;
    
    IMP orig = method_getImplementation(m);
    g_origIMPs[k] = [NSValue valueWithPointer:orig];
    method_setImplementation(m, (IMP)sb_gestureShouldBegin);
    sbLog(@"[hookGSB] ✓ gestureRecognizerShouldBegin: on %@", cn);
}

#pragma mark - translationInView / velocityInView 放大
static IMP g_origTranslationInView = NULL;
static IMP g_origVelocityInView = NULL;

static CGPoint sb_amplifiedTranslationInView(id self, SEL _cmd, UIView *view){
    CGPoint pt = ((CGPoint(*)(id,SEL,UIView*))g_origTranslationInView)(self, _cmd, view);
    pt.x *= 4.0;
    return pt;
}

static CGPoint sb_amplifiedVelocityInView(id self, SEL _cmd, UIView *view){
    CGPoint pt = ((CGPoint(*)(id,SEL,UIView*))g_origVelocityInView)(self, _cmd, view);
    pt.x *= 4.0;
    return pt;
}

static void sb_patchSwipeGestureClass(Class gc){
    if(g_swipeGesturePatched) return;
    g_swipeGesturePatched = YES;
    
    SEL tiv = @selector(translationInView:);
    Method m = class_getInstanceMethod(gc, tiv);
    if(m){
        g_origTranslationInView = method_getImplementation(m);
        const char *types = method_getTypeEncoding(m);
        if(!class_addMethod(gc, tiv, (IMP)sb_amplifiedTranslationInView, types)){
            method_setImplementation(m, (IMP)sb_amplifiedTranslationInView);
        }
    }
    
    SEL viv = @selector(velocityInView:);
    m = class_getInstanceMethod(gc, viv);
    if(m){
        g_origVelocityInView = method_getImplementation(m);
        const char *types = method_getTypeEncoding(m);
        if(!class_addMethod(gc, viv, (IMP)sb_amplifiedVelocityInView, types)){
            method_setImplementation(m, (IMP)sb_amplifiedVelocityInView);
        }
    }
    
    sbLog(@"[patchGesture] _UISwipeActionPanGestureRecognizer: translationInView + velocityInView amplified 4x");
}

#pragma mark - setDelaysTouchesBegan hook
static void(*orig_setDelaysTouchesBegan)(UIGestureRecognizer*, SEL, BOOL) = NULL;
static void replaced_setDelaysTouchesBegan(UIGestureRecognizer *self, SEL _cmd, BOOL v){
    if(orig_setDelaysTouchesBegan) orig_setDelaysTouchesBegan(self, _cmd, NO);
}

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
    if([self respondsToSelector:ssg]){
        ((void(*)(id,SEL))objc_msgSend)(self, ssg);
    }
    
    sb_hookGestureShouldBegin(object_getClass(self));
    
    sbLog(@"[addGR] swipe gesture on %@ patched", NSStringFromClass(object_getClass(self)));
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
    if(!tv)return; tv.panGestureRecognizer.enabled=YES; tv.allowsMultipleSelectionDuringEditing=NO;
    sbLog(@"[vwa] tv=%@ pan=%d ams=%d g=%lu",NSStringFromClass([tv class]),tv.panGestureRecognizer.isEnabled,tv.allowsMultipleSelectionDuringEditing,(unsigned long)tv.gestureRecognizers.count);
}

#pragma mark - install
@implementation WPSessionBoxHook
+ (void)install{
    g_hookedClasses=[NSMutableSet set]; g_origIMPs=[NSMutableDictionary dictionary];
    sbLog(@"[install] === START (v11: translationInView 4x + setDelaysTouchesBegan hook) ===");
    Method m;
    m=class_getInstanceMethod([UITableView class],@selector(setDataSource:));
    if(m){orig_setDS=(void(*)(id,SEL,id))method_getImplementation(m);method_setImplementation(m,(IMP)replaced_setDS);}
    m=class_getInstanceMethod([UITableView class],@selector(setDelegate:));
    if(m){orig_setDL=(void(*)(id,SEL,id))method_getImplementation(m);method_setImplementation(m,(IMP)replaced_setDL);}
    m=class_getInstanceMethod([UITableView class],@selector(setAllowsMultipleSelection:));
    if(m){orig_setAMS=(void(*)(id,SEL,BOOL))method_getImplementation(m);method_setImplementation(m,(IMP)replaced_setAMS);}
    m=class_getInstanceMethod([UITableView class],@selector(addGestureRecognizer:));
    if(m){orig_addGR=(void(*)(id,SEL,id))method_getImplementation(m);method_setImplementation(m,(IMP)replaced_addGR);}
    // hook setDelaysTouchesBegan: on UIGestureRecognizer
    m = class_getInstanceMethod([UIGestureRecognizer class], @selector(setDelaysTouchesBegan:));
    if(m){orig_setDelaysTouchesBegan=(void(*)(id,SEL,BOOL))method_getImplementation(m);method_setImplementation(m,(IMP)replaced_setDelaysTouchesBegan);}
    Class nmvc=objc_getClass("NewMainFrameViewController");
    if(nmvc){m=class_getInstanceMethod(nmvc,@selector(viewWillAppear:)); if(m){orig_vwa=(void(*)(id,SEL,BOOL))method_getImplementation(m);method_setImplementation(m,(IMP)replaced_vwa);}}
    sbLog(@"[install] === COMPLETE ===");
}
@end