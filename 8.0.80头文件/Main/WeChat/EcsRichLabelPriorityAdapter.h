@interface EcsRichLabelPriorityAdapter : NSObject
{
    BOOL _isFromCache; // +0x8
    BOOL _shouldCalcute; // +0x9
    long long _calcuteCount; // +0x10
    long long _calcuteForwardCount; // +0x18
    long long _calcuteReverseCount; // +0x20
    long long _calcuteCost; // +0x28
    NSArray * _leftTextVMList; // +0x30
    EcsRichTextViewModel * _centerTextVM; // +0x38
    NSArray * _rightTextVMList; // +0x40
    double _leftWidth; // +0x48
    double _centerWidth; // +0x50
    double _rightWidth; // +0x58
    double _dotWidth; // +0x60
    NSAttributedString * _totalAttrStringInLight; // +0x68
    NSAttributedString * _totalAttrStringInDark; // +0x70
    NSAttributedString * _leftAttrStringInLight; // +0x78
    NSAttributedString * _leftAttrStringInDark; // +0x80
    NSMutableDictionary * _resultCacheInLight; // +0x88
    NSMutableDictionary * _resultCacheInDark; // +0x90
    NSAttributedString * _rightAttrStringInLight; // +0x98
    NSAttributedString * _rightAttrStringInDark; // +0xa0
    NSAttributedString * _dotAttrStringInLight; // +0xa8
    NSAttributedString * _dotAttrStringInDark; // +0xb0
}
+ (id)createWithViewModel:(id)arg1;
- (id)init;
- (void)setLeftTextVMList:(id)arg1;
- (void)setCenterTextVM:(id)arg1;
- (void)setRightTextVMList:(id)arg1;
- (id)adapterWidth:(long long)arg1 lines:(long long)arg2 isDarkMode:(BOOL)arg3;
- (void)calcuteCenterStringWithAdapterWidth:(long long)arg1 lines:(long long)arg2;
- (void)vaildCenterStringWithAdapterWidth:(long long)arg1 lines:(long long)arg2 length:(long long)arg3 appendDot:(BOOL)arg4 needReverseCheck:(BOOL)arg5;
- (id)reverseVaildCenterStringWithAdapterWidth:(long long)arg1 lines:(long long)arg2 length:(long long)arg3 lastAttrStr:(id)arg4;
- (id)leftAttrStringInLight;
- (id)leftAttrStringInDark;
- (id)rightAttrStringInLight;
- (id)rightAttrStringInDark;
- (id)_attrStringInTextVMList:(id)arg1 isDarkMode:(BOOL)arg2;
- (id)dotAttrStringInLight;
- (id)dotAttrStringInDark;
- (long long)calcuteCount;
- (long long)calcuteForwardCount;
- (long long)calcuteReverseCount;
- (long long)calcuteCost;
- (BOOL)isFromCache;
- (BOOL)shouldCalcute;
- (void)setShouldCalcute:(BOOL)arg1;
- (id)leftTextVMList;
- (id)centerTextVM;
- (id)rightTextVMList;
- (double)leftWidth;
- (double)centerWidth;
- (double)rightWidth;
- (double)dotWidth;
- (id)totalAttrStringInLight;
- (void)setTotalAttrStringInLight:(id)arg1;
- (id)totalAttrStringInDark;
- (void)setTotalAttrStringInDark:(id)arg1;
- (void)setLeftAttrStringInLight:(id)arg1;
- (void)setLeftAttrStringInDark:(id)arg1;
- (id)resultCacheInLight;
- (void)setResultCacheInLight:(id)arg1;
- (id)resultCacheInDark;
- (void)setResultCacheInDark:(id)arg1;
- (void)setRightAttrStringInLight:(id)arg1;
- (void)setRightAttrStringInDark:(id)arg1;
- (void)setDotAttrStringInLight:(id)arg1;
- (void)setDotAttrStringInDark:(id)arg1;
- (void).cxx_destruct;
@end
