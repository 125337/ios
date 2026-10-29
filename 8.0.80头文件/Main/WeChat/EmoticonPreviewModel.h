@interface EmoticonPreviewModel : NSObject
{
    BOOL _bigPreview; // +0x8
    BOOL _showDesc; // +0x9
    BOOL _enableOperation; // +0xa
    BOOL _showBelow; // +0xb
    BOOL _showButtons; // +0xc
    int _scene; // +0x10
    CEmoticonWrap * _emoticonWrap; // +0x18
    NSString * _emoticonDescription; // +0x20
    NSString * _pageWrapPid; // +0x28
    NSString * _prevPageWrapPid; // +0x30
    unsigned long long _index; // +0x38
    CGRect _originFrame; // +0x40
}
- (id)init;
- (BOOL)isEmoticonCanMod;
- (BOOL)isBigPreview;
- (void)resetPreview:(BOOL)arg1;
- (BOOL)isEmoticonCanDelete;
- (BOOL)isEmoticonCanShowStoreDetail;
- (unsigned long long)convetToCustomEmoticonTypeWhenCanMod;
- (double)emoticonStoreEmotionPopoverHeight;
- (double)emoticonCustomEmotionPopoverHeight;
- (double)emoticonSpecialEmotionPopoverHeight;
- (double)height;
- (int)calScene;
- (int)scene;
- (void)reportAction:(int)arg1;
- (id)emoticonWrap;
- (void)setEmoticonWrap:(id)arg1;
- (BOOL)bigPreview;
- (void)setBigPreview:(BOOL)arg1;
- (CGRect)originFrame;
- (void)setOriginFrame:(CGRect)arg1;
- (id)emoticonDescription;
- (void)setEmoticonDescription:(id)arg1;
- (id)pageWrapPid;
- (void)setPageWrapPid:(id)arg1;
- (id)prevPageWrapPid;
- (void)setPrevPageWrapPid:(id)arg1;
- (BOOL)showDesc;
- (void)setShowDesc:(BOOL)arg1;
- (BOOL)enableOperation;
- (void)setEnableOperation:(BOOL)arg1;
- (BOOL)showBelow;
- (void)setShowBelow:(BOOL)arg1;
- (BOOL)showButtons;
- (void)setShowButtons:(BOOL)arg1;
- (unsigned long long)index;
- (void)setIndex:(unsigned long long)arg1;
- (void)setScene:(int)arg1;
- (void).cxx_destruct;
@end
