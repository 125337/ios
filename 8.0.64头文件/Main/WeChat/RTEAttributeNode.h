@interface RTEAttributeNode : RTELinkedListNode
{
    BOOL _effective; // +0x8
    unsigned int _listType; // +0xc
    unsigned int _nodeType; // +0x10
    NSObject<NSCopying> * _attributeInfo; // +0x18
}
+ (id)creatEmptyNote:(unsigned int)arg1 Length:(unsigned long long)arg2;
- (unsigned int)headIndex;
- (void)setHeadIndex:(unsigned int)arg1;
- (void)forceSetListIndex:(unsigned int)arg1;
- (unsigned int)listIndex;
- (void)setListIndex:(unsigned int)arg1;
- (double)fontSize;
- (void)setFontSize:(double)arg1;
- (id)fontColor;
- (void)setFontColor:(id)arg1;
- (BOOL)checked;
- (void)setChecked:(BOOL)arg1;
- (id)favData;
- (void)changeImage:(id)arg1;
- (BOOL)isGifAttribute;
- (BOOL)isOrderListPrefixAttribute;
- (BOOL)isListPrefixAttribute;
- (BOOL)isListContentAttribute;
- (void)configWithImage:(id)arg1;
- (void)configWithGifData:(id)arg1;
- (void)configWithVideoPath:(id)arg1 thumbPath:(id)arg2 duration:(unsigned int)arg3;
- (void)configWithFilePath:(id)arg1 fileName:(id)arg2;
- (void)configWithAsset:(id)arg1 completion:(id /* block */)arg2;
- (void)configWithLocation:(id)arg1;
- (void)configWithHr;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)canBeMergedInto:(id)arg1;
- (id)nextAttributeNode;
- (id)preAttributeNode;
- (unsigned int)listType;
- (void)setListType:(unsigned int)arg1;
- (unsigned int)nodeType;
- (void)setNodeType:(unsigned int)arg1;
- (BOOL)effective;
- (void)setEffective:(BOOL)arg1;
- (id)attributeInfo;
- (void)setAttributeInfo:(id)arg1;
- (void).cxx_destruct;
@end
