@interface MMFinderLiveQuickCommentItem : NSObject
{
    MMFinderLiveQuickReplyModel * _originalReplyModel; // +0x8
    unsigned long long _itemType; // +0x10
    NSString * _content; // +0x18
}
+ (BOOL)checkIsAutoGenQuickCommentType:(long long)arg1;
+ (id)convertFromQuickReplyModelArr:(id)arg1;
+ (id)convertFromQuickReplyModelArrForOuterDisplay:(id)arg1;
+ (id)guidePostCommentItem;
- (BOOL)isEqual:(id)arg1;
- (id)originalReplyModel;
- (void)setOriginalReplyModel:(id)arg1;
- (unsigned long long)itemType;
- (void)setItemType:(unsigned long long)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (void).cxx_destruct;
@end
