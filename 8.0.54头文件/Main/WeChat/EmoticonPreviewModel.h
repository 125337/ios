@interface EmoticonPreviewModel : NSObject
{
    BOOL _showDesc; // +0x8
    BOOL _enableOperation; // +0x9
    int _scene; // +0xc
    CEmoticonWrap * _emoticonWrap; // +0x10
    NSString * _emoticonDescription; // +0x18
    NSString * _pageWrapPid; // +0x20
    NSString * _prevPageWrapPid; // +0x28
    unsigned long long _index; // +0x30
    CGRect _originFrame; // +0x38
}
- (id)init;
- (BOOL)isEmoticonCanMod;
- (BOOL)isEmoticonCanDelete;
- (BOOL)isEmoticonCanShowStoreDetail;
- (unsigned long long)convetToCustomEmoticonTypeWhenCanMod;
- (double)height;
- (int)calScene;
- (int)scene;
- (void)reportAction:(int)arg1;
- (id)emoticonWrap;
- (void)setEmoticonWrap:(id)arg1;
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
- (unsigned long long)index;
- (void)setIndex:(unsigned long long)arg1;
- (void)setScene:(int)arg1;
- (void).cxx_destruct;
@end

