@interface WCAdCanvasButtonClickReportModel : NSObject
{
    int _scene; // +0x8
    int _originScene; // +0xc
    int _action; // +0x10
    int _subType; // +0x14
    int _type; // +0x18
    int _halfScreenMode; // +0x1c
    NSString * _snsid; // +0x20
    NSString * _uxinfo; // +0x28
    NSString * _canvasId; // +0x30
    NSString * _viewid; // +0x38
    NSString * _commInfo; // +0x40
    NSDictionary * _extInfo; // +0x48
}
- (id)snsid;
- (void)setSnsid:(id)arg1;
- (id)uxinfo;
- (void)setUxinfo:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)canvasId;
- (void)setCanvasId:(id)arg1;
- (id)viewid;
- (void)setViewid:(id)arg1;
- (id)commInfo;
- (void)setCommInfo:(id)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (int)originScene;
- (void)setOriginScene:(int)arg1;
- (int)action;
- (void)setAction:(int)arg1;
- (int)subType;
- (void)setSubType:(int)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (int)halfScreenMode;
- (void)setHalfScreenMode:(int)arg1;
- (void).cxx_destruct;
@end
