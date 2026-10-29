@interface TextStateUtil : NSObject
+ (id)decodedExtInfoFromBase64String:(id)arg1;
+ (id)encodedBase64StringFromExtInfo:(id)arg1;
+ (BOOL)isTextStateList:(id)arg1 changedComparedTo:(id)arg2;
+ (id)mergeSortInfosFromLikeInfos:(id)arg1 referenceInfos:(id)arg2;
+ (id)hardcodedDefaultImageId;
+ (id)randomDefaultImageId;
+ (id)defaultImageForId:(id)arg1;
+ (id)defaultImageIdForTextStateId:(id)arg1;
+ (id)defaultImageIdForNumber:(unsigned long long)arg1;
+ (void)addShadowEffectToLabel:(id)arg1;
+ (void)addShadowEffectToButton:(id)arg1;
+ (id)GetIconResourcePath;
+ (id)GetIconResourceTempPath;
+ (BOOL)disableDragToHoverForContact:(id)arg1;
+ (id)emojiInfoFromTextStatusEmojiInfo:(id)arg1;
+ (BOOL)enableComment;
+ (id)fetchFinderDataItemWithTid:(id)arg1 nonceId:(id)arg2;
@end

