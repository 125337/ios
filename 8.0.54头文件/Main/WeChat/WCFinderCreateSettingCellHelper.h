@interface WCFinderCreateSettingCellHelper : NSObject
+ (id)createShowInWXProfileSwitchCellIfNeedDisplay:(double)arg1 navVC:(id)arg2;
+ (id)createShowInWXProfileSectionWithWidth:(double)arg1 navVC:(id)arg2 target:(id)arg3 selector:(SEL)arg4;
+ (id)createShowInWXProfileSectionFooterWithIsSelected:(BOOL)arg1 width:(double)arg2 navVC:(id)arg3;
+ (id)createFinderSettingAccountSelectedCell:(double)arg1 target:(id)arg2 selector:(SEL)arg3 title:(id)arg4 detailTitle:(id)arg5 headURL:(id)arg6 isFinder:(BOOL)arg7 selected:(BOOL)arg8;
+ (id)createFinderSettingAccountSelectedCell:(double)arg1 target:(id)arg2 selector:(SEL)arg3 title:(id)arg4 detailTitle:(id)arg5 headURL:(id)arg6 headImageSize:(id)arg7 isFinder:(BOOL)arg8 selected:(BOOL)arg9;
+ (id)createAccountCellCustomViewTitle:(id)arg1 detailTitle:(id)arg2 headURL:(id)arg3 headImageSize:(id)arg4 width:(double)arg5 isFinder:(BOOL)arg6;
+ (id)createShowInWXProfileLeftView:(double)arg1 navVC:(id)arg2;
+ (id)createFinderToBrandCellWithWidth:(double)arg1 sel:(SEL)arg2 target:(id)arg3 title:(id)arg4 desc:(id)arg5 on:(BOOL)arg6 disable:(BOOL)arg7;
+ (id)createLeftViewWithWidth:(double)arg1 titleText:(id)arg2 detailText:(id)arg3 isDisable:(BOOL)arg4 delegate:(id)arg5;
+ (id)formatJumpWXProfileWording:(id)arg1 href:(id)arg2;
+ (void)exposeShowInWXProfileSwitchCellJumpProfileItem;
+ (id)createTwoLineCell:(id)arg1 secondLine:(id)arg2 accessibility:(id)arg3 width:(double)arg4 switchIsOn:(BOOL)arg5 switchChangeTarget:(id)arg6 action:(SEL)arg7;
+ (id)createTwoLineCell:(id)arg1 secondLine:(id)arg2 accessibility:(id)arg3 width:(double)arg4 switchIsOn:(BOOL)arg5 switchChangeTarget:(id)arg6 action:(SEL)arg7 linkDelegate:(id)arg8;
@end

