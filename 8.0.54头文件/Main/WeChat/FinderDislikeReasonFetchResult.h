@interface FinderDislikeReasonFetchResult : NSObject
{
    BOOL _dislikeReasonFetching; // +0x8
    BOOL _dislikeReasonFetchFailed; // +0x9
    NSArray * _dislikeReasonsBuffers; // +0x10
}
+ (id)makeWithDislikeReasonFetching:(BOOL)arg1 dislikeReasonFetchFailed:(BOOL)arg2 dislikeReasonsBuffers:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (BOOL)dislikeReasonFetching;
- (void)setDislikeReasonFetching:(BOOL)arg1;
- (BOOL)dislikeReasonFetchFailed;
- (void)setDislikeReasonFetchFailed:(BOOL)arg1;
- (id)dislikeReasonsBuffers;
- (void)setDislikeReasonsBuffers:(id)arg1;
- (void).cxx_destruct;
@end

