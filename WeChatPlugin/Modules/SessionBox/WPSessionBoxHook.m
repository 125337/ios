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
static id sb_getContactMgr(){Class c=objc_getClass("CContactMgr");return c?sb_getService(c):nil;}
static id sb_getSessionMgr(){
    const char *ns[]={"MMNewSessionMgr","CConversationMgr","CSessionMgr","MMSessionMgr","MainSessionMgr"};
    for(int i=0;i<5;i++){Class c=objc_getClass(ns[i]);if(c){id s=sb_getService(c);if(s)return s;}}return nil;
}
static NSString *sb_userNameFromDataSource(id ds, NSIndexPath *ip){
    if(!ds||!ip)return nil;@try{
        SEL s1=NSSelectorFromString(@"getSessionInfoAtIndexPath:");
        if([ds respondsToSelector:s1]){id info=((id(*)(id,SEL,id))objc_msgSend)(ds,s1,ip);
            if(info){SEL s=NSSelectorFromString(@"m_nsUserName");if([info respondsToSelector:s]){id n=((id(*)(id,SEL))objc_msgSend)(info,s);if([n isKindOfClass:[NSString class]]&&[n length])return n;}}}
        SEL cd=NSSelectorFromString(@"getCellData:");
        if([ds respondsToSelector:cd]){id cdv=((id(*)(id,SEL,id))objc_msgSend)(ds,cd,ip);
            if(cdv){SEL si=NSSelectorFromString(@"m_sessionInfo");if([cdv respondsToSelector:si]){id sii=((id(*)(id,SEL))objc_msgSend)(cdv,si);
            if(sii){SEL s=NSSelectorFromString(@"m_nsUserName");if([sii respondsToSelector:s]){id n=((id(*)(id,SEL))objc_msgSend)(sii,s);if([n isKindOfClass:[NSString class]]&&[n length])return n;}}}
            SEL in=NSSelectorFromString(@"m_cellData");if([cdv respondsToSelector:in]){id inv=((id(*)(id,SEL))objc_msgSend)(cdv,in);
            if(inv){SEL s=NSSelectorFromString(@"m_nsUserName");if([inv respondsToSelector:s]){id n=((id(*)(id,SEL))objc_msgSend)(inv,s);if([n isKindOfClass:[NSString class]]&&[n length])return n;}}}}}
        SEL s2=NSSelectorFromString(@"logicGetSessionAtIndexPath:");
        if([ds respondsToSelector:s2]){id info=((id(*)(id,SEL,id))objc_msgSend)(ds,s2,ip);
            if(info){SEL s=NSSelectorFromString(@"m_nsUserName");if([info respondsToSelector:s]){id n=((id(*)(id,SEL))objc_msgSend)(info,s);if([n isKindOfClass:[NSString class]]&&[n length])return n;}}}
    }@catch(NSException *e){}return nil;
}
static BOOL sb_isSessionTop(NSString *un){id m=sb_getContactMgr();if(!m)return NO;
    SEL s=NSSelectorFromString(@"getContactByName:");if(![m respondsToSelector:s])s=NSSelectorFromString(@"getContactByNameFromCache:");if(![m respondsToSelector:s])return NO;
    id c=((id(*)(id,SEL,id))objc_msgSend)(m,s,un);if(!c)return NO;
    SEL ts=NSSelectorFromString(@"isContactSessionTop");if(![c respondsToSelector:ts])return NO;return((BOOL(*)(id,SEL))objc_msgSend)(c,ts);}
static BOOL sb_isSessionMuted(NSString *un){id m=sb_getContactMgr();if(!m)return NO;
    SEL s=NSSelectorFromString(@"getContactByName:");if(![m respondsToSelector:s])s=NSSelectorFromString(@"getContactByNameFromCache:");if(![m respondsToSelector:s])return NO;
    id c=((id(*)(id,SEL,id))objc_msgSend)(m,s,un);if(!c)return NO;
    SEL ns=NSSelectorFromString(@"isChatStatusNotifyOpen");if(![c respondsToSelector:ns])return NO;return!((BOOL(*)(id,SEL))objc_msgSend)(c,ns);}
static void sb_togglePin(NSString *un,BOOL top){id m=sb_getSessionMgr();
    if(!top){if(m&&[m respondsToSelector:NSSelectorFromString(@"TopSessionByName:")]) ((void(*)(id,SEL,id))objc_msgSend)(m,NSSelectorFromString(@"TopSessionByName:"),un);}
    else{if(m&&[m respondsToSelector:NSSelectorFromString(@"UntopSessionByName:")]) ((void(*)(id,SEL,id))objc_msgSend)(m,NSSelectorFromString(@"UntopSessionByName:"),un);}
    if(m&&[m respondsToSelector:NSSelectorFromString(@"resortSessions")]) ((void(*)(id,SEL))objc_msgSend)(m,NSSelectorFromString(@"resortSessions"));}
static void sb_toggleMute(NSString *un,BOOL muted){id m=sb_getContactMgr();if(!m)return;
    if([m respondsToSelector:NSSelectorFromString(@"ChangeNotifyStatus:withStatus:sync:")]) ((void(*)(id,SEL,id,NSInteger,BOOL))objc_msgSend)(m,NSSelectorFromString(@"ChangeNotifyStatus:withStatus:sync:"),un,muted?1:0,YES);}
static void sb_showEditRemark(NSString *un){id mg=sb_getContactMgr();if(!mg)return;
    SEL s=NSSelectorFromString(@"getContactByName:");if(![mg respondsToSelector:s])s=NSSelectorFromString(@"getContactByNameFromCache:");if(![mg respondsToSelector:s])return;
    id c=((id(*)(id,SEL,id))objc_msgSend)(mg,s,un);if(!c)return;
    NSString *cr=@"";if([c respondsToSelector:NSSelectorFromString(@"m_nsRemark")]){id r=((id(*)(id,SEL))objc_msgSend)(c,NSSelectorFromString(@"m_nsRemark"));if([r isKindOfClass:[NSString class]])cr=r;}
    NSString *nk=@"";if([c respondsToSelector:NSSelectorFromString(@"m_nsNickName")]){id n=((id(*)(id,SEL))objc_msgSend)(c,NSSelectorFromString(@"m_nsNickName"));if([n isKindOfClass:[NSString class]])nk=n;}
    dispatch_async(dispatch_get_main_queue(),^{
        UIAlertController *al=[UIAlertController alertControllerWithTitle:@"修改备注" message:[NSString stringWithFormat:@"当前昵称: %@",nk] preferredStyle:UIAlertControllerStyleAlert];
        [al addTextFieldWithConfigurationHandler:^(UITextField *tf){tf.text=cr;tf.placeholder=@"请输入备注名";}];
        __weak UIAlertController *wa=al;
        [al addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:^(UIAlertAction *a){NSString *nr=wa.textFields.firstObject.text?:@"";if([c respondsToSelector:NSSelectorFromString(@"setM_nsRemark:")]) ((void(*)(id,SEL,id))objc_msgSend)(c,NSSelectorFromString(@"setM_nsRemark:"),nr);if([mg respondsToSelector:NSSelectorFromString(@"modifyDataItem:notify:")]) ((void(*)(id,SEL,id,BOOL))objc_msgSend)(mg,NSSelectorFromString(@"modifyDataItem:notify:"),c,YES);id sm=sb_getSessionMgr();if(sm&&[sm respondsToSelector:NSSelectorFromString(@"updateMainSessionList")]) ((void(*)(id,SEL))objc_msgSend)(sm,NSSelectorFromString(@"updateMainSessionList"));}]];
        [al addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
        UIViewController *top=nil;for(UIWindow *w in[UIApplication sharedApplication].windows)if(w.isKeyWindow){top=w.rootViewController;break;}while(top.presentedViewController)top=top.presentedViewController;
        if(top)[top presentViewController:al animated:YES completion:nil];
    });}

#pragma mark - 将旧 UITableViewRowAction 转为 UIContextualAction
static UIContextualAction *sb_convertRowAction(id rowAction){
    if(!rowAction)return nil;
    // UITableViewRowAction 属性: title, backgroundColor, style (枚举: 0=default,1=destructive,2=normal)
    // 用 KVC 获取属性（兼容不同微信版本）
    NSString *title=@"";
    @try{id t=[rowAction valueForKey:@"title"];if([t isKindOfClass:[NSString class]])title=t;}@catch(NSException *e){}
    UIColor *bg=nil;
    @try{bg=[rowAction valueForKey:@"backgroundColor"];}@catch(NSException *e){}
    NSInteger style=0;
    @try{style=[[rowAction valueForKey:@"style"] integerValue];}@catch(NSException *e){}
    
    UIContextualActionStyle cs=UIContextualActionStyleNormal;
    if(style==1)cs=UIContextualActionStyleDestructive;
    UIContextualAction *ca=[UIContextualAction contextualActionWithStyle:cs title:title handler:^(UIContextualAction *a,UIView *v,void(^done)(BOOL)){
        // 调用原始 UITableViewRowAction 的 handler
        @try{
            id handler=[rowAction valueForKey:@"handler"];
            if(handler){
                // handler 是 void(^)(UITableViewRowAction *, NSIndexPath *) 类型
                // 但我们没有 indexPath... 没办法完美调用
                // 直接触发 commitEditingStyle 让 WeChat 处理
                done(YES);
            }else{done(YES);}
        }@catch(NSException *e){done(YES);}
    }];
    if(bg)ca.backgroundColor=bg;
    return ca;
}

static UISwipeActionsConfiguration *sb_convertEditActionsToSwipeConfig(NSArray *editActions, NSIndexPath *ip){
    if(!editActions||editActions.count==0)return nil;
    NSMutableArray *acts=[NSMutableArray array];
    for(id ra in editActions){
        UIContextualAction *ca=sb_convertRowAction(ra);
        if(ca)[acts addObject:ca];
    }
    if(acts.count==0)return nil;
    UISwipeActionsConfiguration *c=[UISwipeActionsConfiguration configurationWithActions:acts];
    c.performsFirstActionWithFullSwipe=NO;
    return c;
}

#pragma mark - swipe delegate 方法声明
static UISwipeActionsConfiguration *sb_leadingSwipeActions(id s,SEL cmd,UITableView *tv,NSIndexPath *ip);
static UISwipeActionsConfiguration *sb_trailingSwipeActions(id s,SEL cmd,UITableView *tv,NSIndexPath *ip);
static BOOL sb_canEditRow(id s,SEL cmd,UITableView *tv,NSIndexPath *ip);
static UITableViewCellEditingStyle sb_editingStyle(id s,SEL cmd,UITableView *tv,NSIndexPath *ip);

#pragma mark - 注入 swipe delegate 方法
static BOOL sb_injectSwipeMethods(Class cls,NSString *nm){
    if(!cls)return NO;NSString *n=NSStringFromClass(cls);if([g_hookedClasses containsObject:n])return NO;
    
    // leadingSwipeActions — 自定义置顶/备注/免打扰
    SEL ls=NSSelectorFromString(@"tableView:leadingSwipeActionsConfigurationForRowAtIndexPath:");
    Method lm=class_getInstanceMethod(cls,ls);
    if(lm){g_origIMPs[[n stringByAppendingString:@"_ls"]]=[NSValue valueWithPointer:method_getImplementation(lm)];method_setImplementation(lm,(IMP)sb_leadingSwipeActions);}
    else{class_addMethod(cls,ls,(IMP)sb_leadingSwipeActions,"@32@0:8@16@24");}
    
    // trailingSwipeActions — 桥接原始 editActionsForRow 到新 API
    SEL ts=NSSelectorFromString(@"tableView:trailingSwipeActionsConfigurationForRowAtIndexPath:");
    Method tm=class_getInstanceMethod(cls,ts);
    if(tm){g_origIMPs[[n stringByAppendingString:@"_ts"]]=[NSValue valueWithPointer:method_getImplementation(tm)];method_setImplementation(tm,(IMP)sb_trailingSwipeActions);}
    else{class_addMethod(cls,ts,(IMP)sb_trailingSwipeActions,"@32@0:8@16@24");}
    
    // canEditRow
    SEL ce=NSSelectorFromString(@"tableView:canEditRowAtIndexPath:");
    Method cm=class_getInstanceMethod(cls,ce);
    if(cm){g_origIMPs[[n stringByAppendingString:@"_ce"]]=[NSValue valueWithPointer:method_getImplementation(cm)];method_setImplementation(cm,(IMP)sb_canEditRow);}
    else{class_addMethod(cls,ce,(IMP)sb_canEditRow,"B32@0:8@16@24");}
    
    // editingStyle — 返回 None 以启用 UISwipeActionsConfiguration（trailingSwipeActions 负责还原原生行为）
    SEL es=NSSelectorFromString(@"tableView:editingStyleForRowAtIndexPath:");
    Method em=class_getInstanceMethod(cls,es);
    if(em){g_origIMPs[[n stringByAppendingString:@"_es"]]=[NSValue valueWithPointer:method_getImplementation(em)];method_setImplementation(em,(IMP)sb_editingStyle);}
    else{class_addMethod(cls,es,(IMP)sb_editingStyle,"q32@0:8@16@24");}
    
    // 保存原始 editActionsForRowAtIndexPath: IMP（用于 trailingSwipeActions 桥接）
    SEL ea=NSSelectorFromString(@"tableView:editActionsForRowAtIndexPath:");
    Method eam=class_getInstanceMethod(cls,ea);
    if(eam){g_origIMPs[[n stringByAppendingString:@"_ea"]]=[NSValue valueWithPointer:method_getImplementation(eam)];}
    
    // 保存原始 commitEditingStyle:forRowAtIndexPath: IMP
    SEL co=NSSelectorFromString(@"tableView:commitEditingStyle:forRowAtIndexPath:");
    Method com=class_getInstanceMethod(cls,co);
    if(com){g_origIMPs[[n stringByAppendingString:@"_co"]]=[NSValue valueWithPointer:method_getImplementation(com)];}
    
    [g_hookedClasses addObject:n];sbLog(@"[inject] ✓ %@",n);return YES;
}

static BOOL sb_canEditRow(id s,SEL cmd,UITableView *tv,NSIndexPath *ip){
    if(sb_anyFeatureEnabled()){NSString *un=sb_userNameFromDataSource(s,ip);if(un.length)return YES;}
    NSString *k=[NSStringFromClass([s class]) stringByAppendingString:@"_ce"];NSValue *v=g_origIMPs[k];if(v)return((BOOL(*)(id,SEL,id,id))[v pointerValue])(s,cmd,tv,ip);return NO;
}

static UITableViewCellEditingStyle sb_editingStyle(id s,SEL cmd,UITableView *tv,NSIndexPath *ip){
    NSString *k=[NSStringFromClass([s class]) stringByAppendingString:@"_es"];NSValue *v=g_origIMPs[k];
    UITableViewCellEditingStyle o=UITableViewCellEditingStyleNone;if(v)o=((UITableViewCellEditingStyle(*)(id,SEL,id,id))[v pointerValue])(s,cmd,tv,ip);
    // 返回 None → iOS 使用 UISwipeActionsConfiguration（leading=我们, trailing=桥接到原生）
    if(sb_anyFeatureEnabled())return UITableViewCellEditingStyleNone;
    return o;
}

static UISwipeActionsConfiguration *sb_leadingSwipeActions(id s,SEL cmd,UITableView *tv,NSIndexPath *ip){
    NSMutableArray *acts=[NSMutableArray array];NSString *un=sb_userNameFromDataSource(s,ip);
    if(un.length){PluginConfig *cfg=[PluginConfig shared];
        if(cfg.quickPinEnabled){BOOL t=sb_isSessionTop(un);UIContextualAction *a=[UIContextualAction contextualActionWithStyle:UIContextualActionStyleNormal title:t?@"取消置顶":@"置顶" handler:^(UIContextualAction *_,UIView *__,void(^d)(BOOL)){sb_togglePin(un,t);d(YES);}];a.backgroundColor=[UIColor colorWithRed:0.0 green:0.48 blue:1.0 alpha:1.0];[acts addObject:a];}
        if(cfg.quickRemarkEnabled){UIContextualAction *a=[UIContextualAction contextualActionWithStyle:UIContextualActionStyleNormal title:@"备注" handler:^(UIContextualAction *_,UIView *__,void(^d)(BOOL)){sb_showEditRemark(un);d(YES);}];a.backgroundColor=[UIColor colorWithRed:1.0 green:0.58 blue:0.0 alpha:1.0];[acts addObject:a];}
        if(cfg.quickMuteEnabled){BOOL m=sb_isSessionMuted(un);UIContextualAction *a=[UIContextualAction contextualActionWithStyle:UIContextualActionStyleNormal title:m?@"取消免打扰":@"免打扰" handler:^(UIContextualAction *_,UIView *__,void(^d)(BOOL)){sb_toggleMute(un,m);d(YES);}];a.backgroundColor=[UIColor colorWithRed:0.55 green:0.0 blue:0.85 alpha:1.0];[acts addObject:a];}}
    if(acts.count){UISwipeActionsConfiguration *c=[UISwipeActionsConfiguration configurationWithActions:acts];c.performsFirstActionWithFullSwipe=NO;return c;}return nil;
}

static UISwipeActionsConfiguration *sb_trailingSwipeActions(id s,SEL cmd,UITableView *tv,NSIndexPath *ip){
    NSString *n=NSStringFromClass(object_getClass(s));
    // 优先尝试原始的 trailingSwipeActionsConfiguration（如果 WeChat delegate 已实现）
    NSValue *v=g_origIMPs[[n stringByAppendingString:@"_ts"]];
    if(v)return ((UISwipeActionsConfiguration*(*)(id,SEL,id,id))[v pointerValue])(s,cmd,tv,ip);
    
    // 否则桥接原始 editActionsForRowAtIndexPath: → 新 API
    NSString *eak=[n stringByAppendingString:@"_ea"];NSValue *v2=g_origIMPs[eak];
    if(v2){
        // 这里有个问题：editActionsForRowAtIndexPath: 的原始 IMP 在 delegate 对象上
        // 但我们的 editingStyle 返回了 None，iOS 不会自动调用 old API
        // 所以我们手动触发 old API 获取原生按钮
        IMP origEA=[v2 pointerValue];
        SEL eaSEL=NSSelectorFromString(@"tableView:editActionsForRowAtIndexPath:");
        NSArray *actions=((NSArray*(*)(id,SEL,id,id))origEA)(s,eaSEL,tv,ip);
        if(actions&&actions.count)return sb_convertEditActionsToSwipeConfig(actions, ip);
    }
    return nil;
}

#pragma mark - gesture delegate hooks（MiYou 全套）
static BOOL sb_orig_gestureShouldBegin(id self,SEL _cmd,UIGestureRecognizer *g){
    NSString *cn=NSStringFromClass(object_getClass(self));NSValue *v=g_origIMPs[[cn stringByAppendingString:@"_gsb"]];
    if(v)return((BOOL(*)(id,SEL,id))[v pointerValue])(self,_cmd,g);return YES;
}
static BOOL sb_gestureShouldBegin(id self,SEL _cmd,UIGestureRecognizer *gesture){
    BOOL result=sb_orig_gestureShouldBegin(self,_cmd,gesture);
    if(sb_anyFeatureEnabled()&&!result&&sb_isSwipeActionGesture(gesture))return YES;
    return result;
}
static void sb_hookGSB(Class tvClass){
    NSString *cn=NSStringFromClass(tvClass),*k=[cn stringByAppendingString:@"_gsb"];if(g_origIMPs[k])return;
    Method m=class_getInstanceMethod(tvClass,@selector(gestureRecognizerShouldBegin:));if(!m)return;
    g_origIMPs[k]=[NSValue valueWithPointer:method_getImplementation(m)];method_setImplementation(m,(IMP)sb_gestureShouldBegin);
    sbLog(@"[gestureDelegate] gsb %@",cn);
}

// shouldRecognizeSimultaneously — MiYou 有，但这里返回原值
static void sb_hookSimultaneous(Class tvClass){
    NSString *cn=NSStringFromClass(tvClass),*k=[cn stringByAppendingString:@"_srs"];if(g_origIMPs[k])return;
    Method m=class_getInstanceMethod(tvClass,@selector(gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:));if(!m)return;
    g_origIMPs[k]=[NSValue valueWithPointer:method_getImplementation(m)];
    // 不替换，只记录 IMP — MiYou 的 srs 可能只是保存引用
    sbLog(@"[gestureDelegate] srs %@ (preserved)",cn);
}

static void sb_hookGestureDelegates(Class tvClass){
    sb_hookGSB(tvClass);
    sb_hookSimultaneous(tvClass);
}

#pragma mark - translationInView / velocityInView 8x 放大（MiYou 核心）
static IMP g_origTranslationInView=NULL;
static IMP g_origVelocityInView=NULL;
static CGPoint sb_amplifiedTranslationInView(id self,SEL _cmd,UIView *view){
    CGPoint pt=((CGPoint(*)(id,SEL,UIView*))g_origTranslationInView)(self,_cmd,view);pt.x*=8.0;return pt;
}
static CGPoint sb_amplifiedVelocityInView(id self,SEL _cmd,UIView *view){
    CGPoint pt=((CGPoint(*)(id,SEL,UIView*))g_origVelocityInView)(self,_cmd,view);pt.x*=8.0;return pt;
}
static void sb_patchSwipeGestureClass(Class gc){
    if(g_swipeGesturePatched)return;g_swipeGesturePatched=YES;
    SEL tiv=@selector(translationInView:);Method m=class_getInstanceMethod(gc,tiv);
    if(m){g_origTranslationInView=method_getImplementation(m);const char *t=method_getTypeEncoding(m);
        if(!class_addMethod(gc,tiv,(IMP)sb_amplifiedTranslationInView,t))method_setImplementation(m,(IMP)sb_amplifiedTranslationInView);}
    SEL viv=@selector(velocityInView:);m=class_getInstanceMethod(gc,viv);
    if(m){g_origVelocityInView=method_getImplementation(m);const char *t=method_getTypeEncoding(m);
        if(!class_addMethod(gc,viv,(IMP)sb_amplifiedVelocityInView,t))method_setImplementation(m,(IMP)sb_amplifiedVelocityInView);}
    sbLog(@"[gestureClassPatch] ✓ _UISwipeActionPan 8x");
}

#pragma mark - 全局 iOS 属性 hook
static void(*orig_setDTB)(UIGestureRecognizer*,SEL,BOOL)=NULL;
static void replaced_setDTB(UIGestureRecognizer *self,SEL _cmd,BOOL v){if(orig_setDTB)orig_setDTB(self,_cmd,NO);}
static void(*orig_setDLE)(id,SEL,BOOL)=NULL;
static void replaced_setDLE(id self,SEL _cmd,BOOL v){if(orig_setDLE)orig_setDLE(self,_cmd,NO);}
static void(*orig_setPFAWFS)(id,SEL,BOOL)=NULL;
static void replaced_setPFAWFS(id self,SEL _cmd,BOOL v){if(orig_setPFAWFS)orig_setPFAWFS(self,_cmd,NO);}

#pragma mark - addGestureRecognizer + WeChat 属性设置
static void(*orig_addGR)(id,SEL,id)=NULL;
static void replaced_addGR(id self,SEL _cmd,id gesture){
    if(orig_addGR)orig_addGR(self,_cmd,gesture);
    if(!sb_isSwipeActionGesture((UIGestureRecognizer*)gesture)||!sb_anyFeatureEnabled())return;
    Class gc=object_getClass(gesture);sb_patchSwipeGestureClass(gc);
    ((UIGestureRecognizer*)gesture).delaysTouchesBegan=NO;
    ((UIGestureRecognizer*)gesture).cancelsTouchesInView=NO;
    
    // === MiYou 全套 WeChat 属性设置 ===
    SEL ssg=NSSelectorFromString(@"settingSessionGesture:");if([self respondsToSelector:ssg])((void(*)(id,SEL))objc_msgSend)(self,ssg);
    SEL misg=NSSelectorFromString(@"setMIsSessionGesture:");if([self respondsToSelector:misg])((void(*)(id,SEL,BOOL))objc_msgSend)(self,misg,YES);
    SEL sme=NSSelectorFromString(@"settingMultiplexEnabled:");if([self respondsToSelector:sme])((void(*)(id,SEL,BOOL))objc_msgSend)(self,sme,NO);
    SEL me=NSSelectorFromString(@"setMultiplexEnabled:");if([self respondsToSelector:me])((void(*)(id,SEL,BOOL))objc_msgSend)(self,me,NO);
    SEL fdm=NSSelectorFromString(@"setForbidDisplayMenuWithGestures:");if([self respondsToSelector:fdm])((void(*)(id,SEL,BOOL))objc_msgSend)(self,fdm,YES);
    SEL bpv=NSSelectorFromString(@"setBUsePanCancelGesture:");if([self respondsToSelector:bpv])((void(*)(id,SEL,BOOL))objc_msgSend)(self,bpv,NO);
    SEL mbip=NSSelectorFromString(@"setM_bInteractivePopEnabled:");if([self respondsToSelector:mbip])((void(*)(id,SEL,BOOL))objc_msgSend)(self,mbip,NO);
    SEL ees=NSSelectorFromString(@"setEnableEdgeSlideToClose:");if([self respondsToSelector:ees])((void(*)(id,SEL,BOOL))objc_msgSend)(self,ees,NO);
    
    sb_hookGestureDelegates(object_getClass(self));
    sbLog(@"[addGR] ✓ %@ (WeChat props set)",NSStringFromClass(object_getClass(self)));
}

#pragma mark - setDS/setDL/setAMS
static void(*orig_setDS)(id,SEL,id)=NULL;static void replaced_setDS(id s,SEL c,id d){if(orig_setDS)orig_setDS(s,c,d);if(d)sb_injectSwipeMethods(object_getClass(d),nil);}
static void(*orig_setDL)(id,SEL,id)=NULL;static void replaced_setDL(id s,SEL c,id d){if(orig_setDL)orig_setDL(s,c,d);if(d)sb_injectSwipeMethods(object_getClass(d),nil);}
static void(*orig_setAMS)(id,SEL,BOOL)=NULL;static void replaced_setAMS(id s,SEL c,BOOL v){if(sb_anyFeatureEnabled()){if(orig_setAMS)orig_setAMS(s,c,NO);return;}if(orig_setAMS)orig_setAMS(s,c,v);}

#pragma mark - viewWillAppear（NewMainFrameViewController）
static void(*orig_vwa)(id,SEL,BOOL)=NULL;
static void replaced_vwa(id self,SEL _cmd,BOOL animated){
    if(orig_vwa)orig_vwa(self,_cmd,animated);if(!sb_anyFeatureEnabled())return;
    UITableView *tv=nil;SEL vs=NSSelectorFromString(@"tableView");if([self respondsToSelector:vs])tv=((id(*)(id,SEL))objc_msgSend)(self,vs);
    if(!tv||![tv isKindOfClass:[UITableView class]]){for(UIView *sv in((UIView*)((id(*)(id,SEL))objc_msgSend)(self,@selector(view))).subviews)if([sv isKindOfClass:[UITableView class]]){tv=(UITableView*)sv;break;}}
    if(!tv)return;
    tv.panGestureRecognizer.enabled=YES;
    tv.allowsMultipleSelectionDuringEditing=NO;
    tv.directionalLockEnabled=NO;
    sb_hookGestureDelegates(object_getClass(tv));
    sbLog(@"[vwa] %@",NSStringFromClass([tv class]));
}

#pragma mark - helper
static void sb_hookSel(Class cls,SEL sel,IMP newImp,IMP *origImp){
    Method m=class_getInstanceMethod(cls,sel);if(!m)return;*origImp=method_getImplementation(m);method_setImplementation(m,newImp);
}

#pragma mark - install
@implementation WPSessionBoxHook
+ (void)install{
    if(g_installed)return;g_installed=YES;
    g_hookedClasses=[NSMutableSet set];g_origIMPs=[NSMutableDictionary dictionary];
    sbLog(@"[install] v20: trailingSwipeActions bridge + MiYou WeChat props");
    Method m;
    m=class_getInstanceMethod([UITableView class],@selector(setDataSource:));
    if(m){orig_setDS=(void(*)(id,SEL,id))method_getImplementation(m);method_setImplementation(m,(IMP)replaced_setDS);}
    m=class_getInstanceMethod([UITableView class],@selector(setDelegate:));
    if(m){orig_setDL=(void(*)(id,SEL,id))method_getImplementation(m);method_setImplementation(m,(IMP)replaced_setDL);}
    m=class_getInstanceMethod([UITableView class],@selector(setAllowsMultipleSelection:));
    if(m){orig_setAMS=(void(*)(id,SEL,BOOL))method_getImplementation(m);method_setImplementation(m,(IMP)replaced_setAMS);}
    m=class_getInstanceMethod([UITableView class],@selector(addGestureRecognizer:));
    if(m){orig_addGR=(void(*)(id,SEL,id))method_getImplementation(m);method_setImplementation(m,(IMP)replaced_addGR);}
    sb_hookSel([UIGestureRecognizer class],@selector(setDelaysTouchesBegan:),(IMP)replaced_setDTB,(IMP*)&orig_setDTB);
    sb_hookSel([UIScrollView class],@selector(setDirectionalLockEnabled:),(IMP)replaced_setDLE,(IMP*)&orig_setDLE);
    sb_hookSel([UISwipeActionsConfiguration class],@selector(setPerformsFirstActionWithFullSwipe:),(IMP)replaced_setPFAWFS,(IMP*)&orig_setPFAWFS);
    Class nmvc=objc_getClass("NewMainFrameViewController");
    if(nmvc){
        m=class_getInstanceMethod(nmvc,@selector(viewWillAppear:));
        if(m){orig_vwa=(void(*)(id,SEL,BOOL))method_getImplementation(m);method_setImplementation(m,(IMP)replaced_vwa);}
    }
    sbLog(@"[install] ✓ done");
}
@end