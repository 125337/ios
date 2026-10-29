@interface MMLiveCommentDataDictCache : NSObject <NSCopying>
{
    NSMutableDictionary * _commentDataItemDict; // +0x8
    NSMutableSet * _invalidComments; // +0x10
}
- (id)commentDataItemDict;
- (id)invalidComments;
- (void)cacheCommentDataItems:(id)arg1;
- (void)clearAllCommentDataItemCache;
- (void)clearCommentDataItemCache:(id)arg1;
- (BOOL)updateCommentSeq:(unsigned long long)arg1 withLocalClientMsgId:(id)arg2;
- (void)updateCommentSeqByOwnSeq;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)getCommentDataItemWithSeq:(unsigned long long)arg1;
- (id)getCommentDataItemWithLocalCliMsgId:(id)arg1;
- (unsigned long long)getCommentDataItemCount;
- (void)setCommentDataItemDict:(id)arg1;
- (void)setInvalidComments:(id)arg1;
- (void).cxx_destruct;
@end

