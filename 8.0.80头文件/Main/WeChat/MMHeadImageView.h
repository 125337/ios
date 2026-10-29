@interface MMHeadImageView : MMUIView <IKFContactExt, IEnterpriseContactMgrExt, LongPressImageViewDelegate, MMImageLoaderObserver, IMsgExt, IHeadImageExt, IContactMgrExt, IStrangerContactMgrExt>
{
    UIImageView * _borderImageView; // +0x8
    NSString * _nsHeadImgUrl; // +0x10
    NSString * _nsUsrName; // +0x18
    BOOL _bAutoUpdate; // +0x20
    UIImage * _borderImage; // +0x28
    UIImage * _borderImageHL; // +0x30
    BOOL _addBorder; // +0x38
    BOOL _bRoundedCorner; // +0x39
    id _oTarget; // +0x40
    SEL _selAction; // +0x48
    id _object; // +0x50
    id _oLongPressTarget; // +0x58
    SEL _selLongPressAction; // +0x60
    id _oDoubleClickTarget; // +0x68
    SEL _selDoubleClickAction; // +0x70
    UIImage * _defaultImage; // +0x78
    unsigned char _headUseScene; // +0x80
    unsigned char _headCategory; // +0x81
    BOOL _isHeadImgExistedLocal; // +0x82
    BOOL _addStoryMaskAction; // +0x83
    BOOL _bAlwayShowDefaultImage; // +0x84
    BOOL _isResetToDefault; // +0x85
    unsigned int _conerSize; // +0x88
    MMUILongPressImageView * _headImageView; // +0x90
    id <MMHeadImageViewDelegate> _delegate; // +0x98
    CGSize _imageSize; // +0xa0
}
- (id)initWithUsrName:(id)arg1 headImgUrl:(id)arg2 bAutoUpdate:(BOOL)arg3 bRoundCorner:(BOOL)arg4;
- (void)dealloc;
- (CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (double)preferCornerSize;
- (void)setHeadImageByName:(id)arg1;
- (void)setBorderImage:(id)arg1;
- (void)setBorderImageHL:(id)arg1;
- (void)checkAndUpdateImage;
- (void)doUpdateHeadImg:(BOOL)arg1;
- (id)getRealUserName:(id)arg1;
- (void)updateUsrName:(id)arg1 withHeadImgUrl:(id)arg2;
- (void)updateExtensionRegister;
- (void)setAddBorder:(BOOL)arg1;
- (void)setWxHighlighted:(BOOL)arg1;
- (BOOL)isWxHighlighted;
- (void)onHeadImageChange:(id)arg1;
- (void)onKFContactHeadImgUpdate:(id)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (void)setTarget:(id)arg1 action:(SEL)arg2 withObject:(id)arg3;
- (void)setTargetForLongPress:(id)arg1 action:(SEL)arg2;
- (void)setTargetForDoubleClick:(id)arg1 action:(SEL)arg2;
- (void)setTargetForDoubleClick:(id)arg1 action:(SEL)arg2 inCell:(BOOL)arg3;
- (void)updateHighlightRelatedSetting;
- (void)resetToDefaultImage;
- (void)updateHeadImage:(id)arg1;
- (void)updateHeadImageUrl:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (void)setImageSize:(CGSize)arg1;
- (void)setConerSize:(unsigned int)arg1;
- (void)setHeadImageViewCornerRadius:(double)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onStrangerContactUpdated:(id)arg1;
- (void)onModifyEnterpriseContact:(id)arg1;
- (void)OnPress:(id)arg1;
- (void)OnLongPress:(id)arg1;
- (void)OnImageDoubleClick:(id)arg1;
- (id)borderImage;
- (id)borderImageHL;
- (BOOL)addBorder;
- (id)nsUsrName;
- (id)defaultImage;
- (void)setDefaultImage:(id)arg1;
- (unsigned char)headUseScene;
- (void)setHeadUseScene:(unsigned char)arg1;
- (unsigned char)headCategory;
- (void)setHeadCategory:(unsigned char)arg1;
- (CGSize)imageSize;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (unsigned int)conerSize;
- (BOOL)addStoryMaskAction;
- (void)setAddStoryMaskAction:(BOOL)arg1;
- (BOOL)bAlwayShowDefaultImage;
- (void)setBAlwayShowDefaultImage:(BOOL)arg1;
- (BOOL)bRoundedCorner;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isResetToDefault;
- (void)setIsResetToDefault:(BOOL)arg1;
- (void).cxx_destruct;
@end
