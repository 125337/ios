@interface WNContentStorage : RTEContentStorage
{
    BOOL _isSmallImageMode; // +0x8
    BOOL _enableNewOrderList; // +0x9
    long long _presentationStyle; // +0x10
}
+ (id)contentDefaultTextAttribute;
+ (id)contentDefaultTextAttributeForStyle:(long long)arg1;
+ (id)contentCustomTextAttributeWithFont:(id)arg1;
+ (id)contentCustomTextAttributeWithFont:(id)arg1 forStyle:(long long)arg2;
+ (id)contentCustomTextAttributeWithFont:(id)arg1 lineHeightMultiple:(double)arg2;
+ (id)contentCustomTextAttributeWithFont:(id)arg1 lineHeightMultiple:(double)arg2 forStyle:(long long)arg3;
+ (id)contentDefaultParagraphStyle;
+ (id)contentDefaultParagraphStyleForStyle:(long long)arg1;
+ (id)convertGeneratedSectionWrapToContentStorage:(id)arg1 withFavDataList:(id)arg2;
+ (id)convertGeneratedSectionWrapToContentStorage:(id)arg1 withFavDataList:(id)arg2 isSmallImageMode:(BOOL)arg3;
+ (unsigned int)convertRTEAttributeNodeTypeToWN:(int)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)enableNewOrderList;
- (unsigned int)mediaAttachmentCount;
- (BOOL)containListInRange:(_NSRange)arg1;
- (BOOL)containListPrefixInRange:(_NSRange)arg1;
- (BOOL)containRecordingAttributeInRange:(_NSRange)arg1;
- (BOOL)containImageOrVideoAttributeInRange:(_NSRange)arg1;
- (BOOL)containAttachmentInRange:(_NSRange)arg1;
- (BOOL)containMediaAttachmentInRange:(_NSRange)arg1;
- (BOOL)containHeaderAttachmentInRange:(_NSRange)arg1;
- (BOOL)containOrdinaryCharacterInRange:(_NSRange)arg1;
- (BOOL)isImageOnRange:(_NSRange)arg1;
- (BOOL)canBoldOnRange:(_NSRange)arg1;
- (BOOL)canUnBoldOnRange:(_NSRange)arg1;
- (BOOL)canHighlightOnRange:(_NSRange)arg1;
- (BOOL)canUnHighlightOnRange:(_NSRange)arg1;
- (void)removeAllHighlightAttributes;
- (BOOL)canSetLargeImageOnRange:(_NSRange)arg1;
- (BOOL)canSetSmallImageOnRange:(_NSRange)arg1;
- (BOOL)needSeperateAtLocation:(unsigned long long)arg1;
- (BOOL)updateListAttributeSinceIndex:(unsigned long long)arg1;
- (void)deleteCententAtRange:(_NSRange)arg1;
- (BOOL)isAttribute:(id)arg1 extendableAtIndex:(unsigned long long)arg2 isPreNode:(BOOL)arg3;
- (id)buildAttributedStringForRange:(_NSRange)arg1;
- (id)typingAttributesAtIndex:(unsigned long long)arg1;
- (id)attributesAtIndex:(unsigned long long)arg1;
- (BOOL)needResetParagraphSpacingWithList:(id)arg1 node:(id)arg2;
- (void)removeBackgroundColorForNewLine:(id)arg1;
- (void)adjustTextAlignmentFor:(id)arg1;
- (BOOL)isSmallImageMode;
- (void)setIsSmallImageMode:(BOOL)arg1;
- (void)setEnableNewOrderList:(BOOL)arg1;
- (long long)presentationStyle;
- (void)setPresentationStyle:(long long)arg1;
@end
