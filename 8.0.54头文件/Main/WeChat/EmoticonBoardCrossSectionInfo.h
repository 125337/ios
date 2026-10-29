@interface EmoticonBoardCrossSectionInfo : NSObject
{
    BOOL _shouldShowLoadingIfNeeded; // +0x8
    unsigned long long _sectionIndex; // +0x10
    EmoticonBoardPageWrap * _pageWrap; // +0x18
    OrderedDictionary * _qqEmojiDictionary; // +0x20
    NSString * _pidNeedScrollTo; // +0x28
    CGPoint _offsetInFatherCollection; // +0x30
    CGPoint _offset; // +0x40
}
- (unsigned long long)sectionIndex;
- (void)setSectionIndex:(unsigned long long)arg1;
- (id)pageWrap;
- (void)setPageWrap:(id)arg1;
- (CGPoint)offsetInFatherCollection;
- (void)setOffsetInFatherCollection:(CGPoint)arg1;
- (CGPoint)offset;
- (void)setOffset:(CGPoint)arg1;
- (id)qqEmojiDictionary;
- (void)setQqEmojiDictionary:(id)arg1;
- (id)pidNeedScrollTo;
- (void)setPidNeedScrollTo:(id)arg1;
- (BOOL)shouldShowLoadingIfNeeded;
- (void)setShouldShowLoadingIfNeeded:(BOOL)arg1;
- (void).cxx_destruct;
@end

