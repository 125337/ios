@interface ElderModeLogic : NSObject <IOplogExt>
{
    NSMutableArray * _oplogInfos; // +0x8
}
+ (id)shareInstance;
+ (BOOL)isElderModeOn;
+ (BOOL)isSpecialRenderModeOn;
+ (BOOL)isTTSModeOn;
+ (BOOL)isSilentModeOn;
+ (BOOL)isSilentModeBitOn;
+ (BOOL)allSubModeOff;
+ (void)closeElderModeIfNeed;
+ (void)setElderModeOn:(BOOL)arg1;
+ (void)setSpecialRenderModeOn:(BOOL)arg1;
+ (void)setTTSModeOn:(BOOL)arg1;
+ (void)setSilentModeOn:(BOOL)arg1;
+ (void)effectElderModeOn;
+ (void)refreshColorSetting;
- (void)setElderModeOn:(BOOL)arg1;
- (void)setSpecialRenderModeOn:(BOOL)arg1;
- (void)setTTSModeOn:(BOOL)arg1;
- (void)setSilentModeOn:(BOOL)arg1;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (id)oplogInfos;
- (void)setOplogInfos:(id)arg1;
- (void).cxx_destruct;
@end

