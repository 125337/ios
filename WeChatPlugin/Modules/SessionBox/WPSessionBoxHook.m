#import "WPSessionBoxHook.h"
#import "../../Config/PluginConfig.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <UIKit/UIKit.h>

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

#pragma mark - Feature Toggle
static BOOL sb_anyFeatureEnabled(void) {
    PluginConfig *cfg = [PluginConfig shared];
    return cfg.quickPinEnabled || cfg.quickRemarkEnabled || cfg.quickMuteEnabled;
}

#pragma mark - WeChat Service Helpers
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

#pragma mark - Business Logic
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

#pragma mark - Action Button Target (用objc runtime作为target)
static UIView *sb_activeActionView = nil;
static NSIndexPath *sb_activeIP = nil;
static NSString *sb_activeUN = nil;
static UITableView *sb_activeTV = nil;
static void sb_dismissActionView(void);

@interface SBActionTarget : NSObject @end
@implementation SBActionTarget
- (void)onPinTapped:(UIButton *)sender{
    NSIndexPath *ip=sb_activeIP;NSString *un=sb_activeUN;
    if(ip&&un.length){BOOL t=sb_isSessionTop(un);sb_togglePin(un,t);}
    sb_dismissActionView();
}
- (void)onRemarkTapped:(UIButton *)sender{
    NSString *un=sb_activeUN;if(un.length)sb_showEditRemark(un);
    sb_dismissActionView();
}
- (void)onMuteTapped:(UIButton *)sender{
    NSIndexPath *ip=sb_activeIP;NSString *un=sb_activeUN;
    if(ip&&un.length){BOOL m=sb_isSessionMuted(un);sb_toggleMute(un,m);}
    sb_dismissActionView();
}
- (void)onDismissTapped{ sb_dismissActionView(); }
@end
static SBActionTarget *sb_actionTarget = nil;

#pragma mark - Custom Pan Gesture + Action Buttons (MiYou风格: 自定义手势+自定义UI)
static CGFloat sb_buttonWidth = 72;
static CGFloat sb_buttonHeight = 56;

static void sb_dismissActionView(void){
    if(sb_activeActionView){
        sb_activeActionView.userInteractionEnabled=NO;
        [UIView animateWithDuration:0.2 animations:^{sb_activeActionView.alpha=0;}
        completion:^(BOOL f){[sb_activeActionView removeFromSuperview];}];
        sb_activeActionView=nil;
    }
    sb_activeIP=nil;sb_activeUN=nil;sb_activeTV=nil;
}

static void sb_showActionButtons(UITableView *tv,NSIndexPath *ip,NSString *un,UIView *cell){
    sb_dismissActionView();
    if(!un.length)return;
    PluginConfig *cfg=[PluginConfig shared];
    
    if(!sb_actionTarget)sb_actionTarget=[[SBActionTarget alloc] init];
    
    CGRect cf=[tv rectForRowAtIndexPath:ip];
    CGPoint co2=[tv convertPoint:cf.origin toView:tv.superview];
    CGFloat y=co2.y; CGFloat h=cf.size.height;
    
    NSMutableArray *btns=[NSMutableArray array];CGFloat totalW=0;
    
    if(cfg.quickPinEnabled){
        BOOL t=sb_isSessionTop(un);
        UIButton *b=[UIButton buttonWithType:UIButtonTypeCustom];
        [b setTitle:t?@"取消置顶":@"置顶" forState:UIControlStateNormal];
        b.titleLabel.font=[UIFont boldSystemFontOfSize:13];
        b.backgroundColor=[UIColor colorWithRed:0.1 green:0.4 blue:0.9 alpha:0.92];
        b.layer.cornerRadius=6;b.clipsToBounds=YES;
        [b addTarget:sb_actionTarget action:@selector(onPinTapped:) forControlEvents:UIControlEventTouchUpInside];
        b.frame=CGRectMake(totalW+4,8,sb_buttonWidth-4,sb_buttonHeight-12);
        totalW+=sb_buttonWidth;[btns addObject:b];
    }
    if(cfg.quickRemarkEnabled){
        UIButton *b=[UIButton buttonWithType:UIButtonTypeCustom];
        [b setTitle:@"备注" forState:UIControlStateNormal];
        b.titleLabel.font=[UIFont boldSystemFontOfSize:13];
        b.backgroundColor=[UIColor colorWithRed:0.95 green:0.55 blue:0.05 alpha:0.92];
        b.layer.cornerRadius=6;b.clipsToBounds=YES;
        [b addTarget:sb_actionTarget action:@selector(onRemarkTapped:) forControlEvents:UIControlEventTouchUpInside];
        b.frame=CGRectMake(totalW+4,8,sb_buttonWidth-4,sb_buttonHeight-12);
        totalW+=sb_buttonWidth;[btns addObject:b];
    }
    if(cfg.quickMuteEnabled){
        BOOL m=sb_isSessionMuted(un);
        UIButton *b=[UIButton buttonWithType:UIButtonTypeCustom];
        [b setTitle:m?@"免打扰✓":@"免打扰" forState:UIControlStateNormal];
        b.titleLabel.font=[UIFont boldSystemFontOfSize:13];
        b.backgroundColor=[UIColor colorWithRed:0.45 green:0.05 blue:0.75 alpha:0.92];
        b.layer.cornerRadius=6;b.clipsToBounds=YES;
        [b addTarget:sb_actionTarget action:@selector(onMuteTapped:) forControlEvents:UIControlEventTouchUpInside];
        b.frame=CGRectMake(totalW+4,8,sb_buttonWidth-4,sb_buttonHeight-12);
        totalW+=sb_buttonWidth;[btns addObject:b];
    }
    if(btns.count==0)return;
    
    UIButton *closeBtn=[UIButton buttonWithType:UIButtonTypeCustom];
    closeBtn.frame=CGRectMake(totalW+2,0,30,h);
    [closeBtn setTitle:@"◀" forState:UIControlStateNormal];
    closeBtn.titleLabel.font=[UIFont systemFontOfSize:16];
    [closeBtn setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
    [closeBtn addTarget:sb_actionTarget action:@selector(onDismissTapped) forControlEvents:UIControlEventTouchUpInside];
    totalW+=32;
    
    UIView *container=[[UIView alloc] initWithFrame:CGRectMake(0,0,totalW+8,h)];
    container.backgroundColor=[[UIColor blackColor] colorWithAlphaComponent:0.4];
    for(UIButton *b in btns)[container addSubview:b];
    [container addSubview:closeBtn];
    
    UIView *actionView=[[UIView alloc] initWithFrame:CGRectMake(0,y,totalW+8,h)];
    actionView.backgroundColor=[UIColor clearColor];actionView.clipsToBounds=YES;
    [actionView addSubview:container];
    actionView.alpha=0;
    
    [tv.superview addSubview:actionView];
    [UIView animateWithDuration:0.2 animations:^{actionView.alpha=1;}];
    
    sb_activeActionView=actionView;sb_activeIP=ip;sb_activeUN=un;sb_activeTV=tv;
}

#pragma mark - Custom Pan Gesture Handler (MiYou风格)
static void sb_handleCustomPan(UIPanGestureRecognizer *pan){
    UITableView *tv=(UITableView *)pan.view;
    CGPoint loc=[pan locationInView:tv];
    CGPoint trans=[pan translationInView:tv];
    
    if(pan.state==UIGestureRecognizerStateBegan){
        NSIndexPath *ip=[tv indexPathForRowAtPoint:loc];
        if(ip){
            id ds=tv.dataSource;
            NSString *un=sb_userNameFromDataSource(ds,ip);
            if(un.length){
                sbLog(@"[pan] began ip=%@ un=%@ trans=(%.0f,%.0f)",ip,un,trans.x,trans.y);
            }
        }
    }
    else if(pan.state==UIGestureRecognizerStateChanged){
        if(fabs(trans.y)>fabs(trans.x)*2)return;
        if(trans.x<30)return;
        NSIndexPath *ip=[tv indexPathForRowAtPoint:loc];
        if(!ip||(sb_activeIP&&[ip isEqual:sb_activeIP]))return;
        id ds=tv.dataSource;
        NSString *un=sb_userNameFromDataSource(ds,ip);
        if(!un.length)return;
        sb_dismissActionView();
        UIView *cell=[tv cellForRowAtIndexPath:ip];
        if(cell)sb_showActionButtons(tv,ip,un,cell);
        sbLog(@"[pan] show leading swipe for %@ trans.x=%.0f",un,trans.x);
    }
    else if(pan.state==UIGestureRecognizerStateEnded||pan.state==UIGestureRecognizerStateCancelled){
        sbLog(@"[pan] ended");
    }
}

#pragma mark - Global iOS Hooks (防微信覆盖属性)
static void(*orig_setDTB)(UIGestureRecognizer*,SEL,BOOL)=NULL;
static void replaced_setDTB(UIGestureRecognizer *self,SEL _cmd,BOOL v){if(orig_setDTB)orig_setDTB(self,_cmd,NO);}
static void(*orig_setCTIV)(UIGestureRecognizer*,SEL,BOOL)=NULL;
static void replaced_setCTIV(UIGestureRecognizer *self,SEL _cmd,BOOL v){if(orig_setCTIV)orig_setCTIV(self,_cmd,NO);}
static void(*orig_setDLE)(id,SEL,BOOL)=NULL;
static void replaced_setDLE(id self,SEL _cmd,BOOL v){if(orig_setDLE)orig_setDLE(self,_cmd,NO);}
static void(*orig_setAMS)(id,SEL,BOOL)=NULL;
static void replaced_setAMS(id s,SEL c,BOOL v){if(sb_anyFeatureEnabled()){if(orig_setAMS)orig_setAMS(s,c,NO);return;}if(orig_setAMS)orig_setAMS(s,c,v);}

#pragma mark - viewWillAppear hook (添加自定义手势 + WeChat属性设置)
static void(*orig_vwa)(id,SEL,BOOL)=NULL;
static void replaced_vwa(id self,SEL _cmd,BOOL animated){
    if(orig_vwa)orig_vwa(self,_cmd,animated);
    if(!sb_anyFeatureEnabled())return;
    
    UITableView *tv=nil;
    SEL vs=NSSelectorFromString(@"tableView");if([self respondsToSelector:vs])tv=((id(*)(id,SEL))objc_msgSend)(self,vs);
    if(!tv||![tv isKindOfClass:[UITableView class]]){for(UIView *sv in((UIView*)((id(*)(id,SEL))objc_msgSend)(self,@selector(view))).subviews)if([sv isKindOfClass:[UITableView class]]){tv=(UITableView*)sv;break;}}
    if(!tv)return;
    
    static NSString *panKey=@"sb_customPan_installed";
    if(objc_getAssociatedObject(tv,(__bridge const void*)panKey)){sbLog(@"[vwa] pan already installed on %@",NSStringFromClass([tv class]));return;}
    
    UIPanGestureRecognizer *customPan=[[UIPanGestureRecognizer alloc] initWithTarget:nil action:NSSelectorFromString(@"sb_handleCustomPan:")];
    customPan.delegate=(id<UIGestureRecognizerDelegate>)tv;
    [tv addGestureRecognizer:customPan];
    objc_setAssociatedObject(tv,(__bridge const void*)panKey,customPan,OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    
    // WeChat property configuration
    SEL ssg=NSSelectorFromString(@"settingSessionGesture:");if([self respondsToSelector:ssg])((void(*)(id,SEL))objc_msgSend)(self,ssg);
    SEL misg=NSSelectorFromString(@"setMIsSessionGesture:");if([self respondsToSelector:misg])((void(*)(id,SEL,BOOL))objc_msgSend)(self,misg,YES);
    SEL me=NSSelectorFromString(@"setMultiplexEnabled:");if([self respondsToSelector:me])((void(*)(id,SEL,BOOL))objc_msgSend)(self,me,NO);
    SEL fdm=NSSelectorFromString(@"setForbidDisplayMenuWithGestures:");if([self respondsToSelector:fdm])((void(*)(id,SEL,BOOL))objc_msgSend)(self,fdm,YES);
    SEL bpv=NSSelectorFromString(@"setBUsePanCancelGesture:");if([self respondsToSelector:bpv])((void(*)(id,SEL,BOOL))objc_msgSend)(self,bpv,NO);
    SEL mbip=NSSelectorFromString(@"setM_bInteractivePopEnabled:");if([self respondsToSelector:mbip])((void(*)(id,SEL,BOOL))objc_msgSend)(self,mbip,NO);
    SEL ees=NSSelectorFromString(@"setEnableEdgeSlideToClose:");if([self respondsToSelector:ees])((void(*)(id,SEL,BOOL))objc_msgSend)(self,ees,NO);
    
    sbLog(@"[pan] ✓ custom UIPanGesture added to %@",NSStringFromClass([tv class]));
}

#pragma mark - tableview scrolling (dismiss on scroll)
static void(*orig_scrollViewDidScroll)(id,SEL,UIScrollView*)=NULL;
static void replaced_scrollViewDidScroll(id self,SEL _cmd,UIScrollView *sv){
    if(orig_scrollViewDidScroll)orig_scrollViewDidScroll(self,_cmd,sv);
    if(sb_activeActionView&&sb_activeTV==(UITableView*)sv)sb_dismissActionView();
}

#pragma mark - helper
static void sb_hookSel(Class cls,SEL sel,IMP newImp,IMP *origImp){
    Method m=class_getInstanceMethod(cls,sel);if(!m)return;*origImp=method_getImplementation(m);method_setImplementation(m,newImp);
}

#pragma mark - install
@implementation WPSessionBoxHook
+ (void)install{
    if(g_installed)return;g_installed=YES;
    sbLog(@"[install] v22: 自定义UIPanGestureRecognizer + 自定义按钮UI (MiYou风格)");
    
    sb_hookSel([UIGestureRecognizer class],@selector(setDelaysTouchesBegan:),(IMP)replaced_setDTB,(IMP*)&orig_setDTB);
    sb_hookSel([UIGestureRecognizer class],@selector(setCancelsTouchesInView:),(IMP)replaced_setCTIV,(IMP*)&orig_setCTIV);
    sb_hookSel([UIScrollView class],@selector(setDirectionalLockEnabled:),(IMP)replaced_setDLE,(IMP*)&orig_setDLE);
    
    Method m=class_getInstanceMethod([UITableView class],@selector(setAllowsMultipleSelection:));
    if(m){orig_setAMS=(void(*)(id,SEL,BOOL))method_getImplementation(m);method_setImplementation(m,(IMP)replaced_setAMS);}
    
    Class nmvc=objc_getClass("NewMainFrameViewController");
    if(nmvc){
        m=class_getInstanceMethod(nmvc,@selector(viewWillAppear:));
        if(m){orig_vwa=(void(*)(id,SEL,BOOL))method_getImplementation(m);method_setImplementation(m,(IMP)replaced_vwa);}
        m=class_getInstanceMethod(nmvc,NSSelectorFromString(@"scrollViewDidScroll:"));
        if(m){orig_scrollViewDidScroll=(void(*)(id,SEL,UIScrollView*))method_getImplementation(m);method_setImplementation(m,(IMP)replaced_scrollViewDidScroll);}
    }
    
    sbLog(@"[install] ✓ done");
}
@end