@interface StoreEmotionAllListReportInfo : NSObject
{
    int _pageScene; // +0x8
    NSString * _sessionID; // +0x10
    NSString * _designerUin; // +0x18
}
- (id)sessionID;
- (void)setSessionID:(id)arg1;
- (id)designerUin;
- (void)setDesignerUin:(id)arg1;
- (int)pageScene;
- (void)setPageScene:(int)arg1;
- (void).cxx_destruct;
@end
