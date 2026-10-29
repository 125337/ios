@interface WCADCanvasPage : NSObject <NSCoding, WCCanvasIfAbility>
{
    NSString * bgCoverUrl; // +0x8
    BOOL isAddBlur; // +0x10
    NSString * blurColorTheme; // +0x18
    double blurColorAlpha; // +0x20
    NSString * bgColorTheme; // +0x28
    NSArray * originalComponentItemList; // +0x30
    NSArray * adCanvasComponentItemList; // +0x38
    int type; // +0x40
    int subType; // +0x44
    int bgFillMode; // +0x48
    int bgCoverAlign; // +0x4c
    int canvasIf; // +0x50
    int hasIf; // +0x54
    NSMutableArray * dynamicsInfo; // +0x58
    NSArray * _forbiddenGlobalItems; // +0x60
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)updateUsingDynamicInfo:(id)arg1;
- (void)updateAdCanvasComponentItemList;
- (id)adCanvasComponentItemList;
- (id)bgCoverUrl;
- (void)setBgCoverUrl:(id)arg1;
- (id)bgColorTheme;
- (void)setBgColorTheme:(id)arg1;
- (id)originalComponentItemList;
- (void)setOriginalComponentItemList:(id)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (int)subType;
- (void)setSubType:(int)arg1;
- (BOOL)isAddBlur;
- (void)setIsAddBlur:(BOOL)arg1;
- (int)bgFillMode;
- (void)setBgFillMode:(int)arg1;
- (int)bgCoverAlign;
- (void)setBgCoverAlign:(int)arg1;
- (id)blurColorTheme;
- (void)setBlurColorTheme:(id)arg1;
- (double)blurColorAlpha;
- (void)setBlurColorAlpha:(double)arg1;
- (id)dynamicsInfo;
- (void)setDynamicsInfo:(id)arg1;
- (int)canvasIf;
- (void)setCanvasIf:(int)arg1;
- (int)hasIf;
- (void)setHasIf:(int)arg1;
- (id)forbiddenGlobalItems;
- (void)setForbiddenGlobalItems:(id)arg1;
- (void).cxx_destruct;
@end
