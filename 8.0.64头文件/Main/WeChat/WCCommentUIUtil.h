@interface WCCommentUIUtil : NSObject
+ (id)contentTextColor:(id)arg1 defaultColor:(id)arg2;
+ (id)genContentStrPrefix:(id)arg1 inDataItem:(id)arg2;
+ (id)genContentUserStr:(id)arg1 username:(id)arg2 nickname:(id)arg3 isHBComment:(BOOL)arg4 isAdvertiserUser:(BOOL)arg5 customColor:(id)arg6;
+ (id)genContentStrPrefixFB:(id)arg1 inDataItem:(id)arg2;
+ (id)genContentUserStrFB:(id)arg1 username:(id)arg2 nickname:(id)arg3 isHBComment:(BOOL)arg4 isAdvertiserUser:(BOOL)arg5 isDeleteByFeedOwner:(BOOL)arg6 customColor:(id)arg7;
+ (id)genAccessibilityLabel:(id)arg1;
+ (id)getDisplayName:(id)arg1 username:(id)arg2 nickname:(id)arg3 isAdvertiserUser:(BOOL)arg4;
+ (BOOL)isDisplayFlagInsteadOfRealContent:(id)arg1;
+ (CGSize)makeEmojiSizeWithMaxSide:(double)arg1 emojiInfo:(id)arg2;
+ (CGSize)makeImageSizeWithMinSide:(double)arg1 comment:(id)arg2;
+ (CGSize)makeSizeWithFixedHeight:(double)arg1 maxWidth:(double)arg2 comment:(id)arg3;
+ (CGSize)makeImageSizeWithFixedHeight:(double)arg1 maxWidth:(double)arg2 comment:(id)arg3;
+ (CGSize)makeEmojiSizeWithFixedHeight:(double)arg1 maxWidth:(double)arg2 emojiInfo:(id)arg3;
+ (void)imagePreview:(id)arg1 thumb:(id)arg2 image:(id)arg3;
+ (void)imagePreview:(id)arg1 thumb:(id)arg2 item:(id)arg3;
+ (void)imagePreview:(id)arg1 thumb:(id)arg2 item:(id)arg3 dataItem:(id)arg4;
+ (id)imageInfoToMediaItem:(id)arg1;
+ (id)getEmoticonWrapWithMd5:(id)arg1 EmojiInfoObj:(id)arg2;
+ (id)formatEmoticonOrImgRichTextWithContent:(id)arg1 commentUserInfo:(id)arg2 emoticonBrowse:(BOOL)arg3 imgBrowse:(BOOL)arg4;
@end
