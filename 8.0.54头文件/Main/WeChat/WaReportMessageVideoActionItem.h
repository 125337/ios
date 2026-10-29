@interface WaReportMessageVideoActionItem : WAReportBaseItem
{
    unsigned int _sceneType; // +0x8
    unsigned int _operateType; // +0xc
}
- (int)reportID;
- (id)reportString;
- (unsigned int)sceneType;
- (void)setSceneType:(unsigned int)arg1;
- (unsigned int)operateType;
- (void)setOperateType:(unsigned int)arg1;
@end

