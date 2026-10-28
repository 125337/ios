@interface QQEmojiDataHelper : MMObject
+ (id)getQQEmoticonImage:(id)arg1;
+ (BOOL)loadQQEmotionImageByExpression:(id)arg1 isSync:(BOOL)arg2 completion:(id /* block */)arg3;
+ (id)getFinalString:(id)arg1;
+ (id)getFinalCode:(id)arg1;
+ (id)getQQEmojiArray;
+ (id)getQQemojiPageWrap;
+ (id)getQQPid;
+ (id)getSystemEmojiArray:(id)arg1;
+ (id)getSystemEmojiAllCategoriesName;
+ (id)categoryImage:(id)arg1;
+ (id)categoryDisplayName:(id)arg1;
@end
