@interface TingTapeItem : WXPBGeneratedMessage
+ (id)tapeItemFromCategoryItem:(id)arg1;
+ (id)tapeItemFromListenItem:(id)arg1;
+ (void)initialize;
- (id)localUUID;
- (id)serverUUID;
- (id)tapeId;
- (id)tapeClientId;
- (id)tapeCoverUrl;
- (id)tapeAuthorIcon;
- (id)tapeAuthor;
- (id)tapeTitle;
@end

