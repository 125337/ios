@interface MMLiveCommentDataAppendParam : NSObject
{
    BOOL _isCustomAppendAllData; // +0x8
    BOOL _unableSynchronizeBack; // +0x9
    unsigned int _refreshCommentCount; // +0xc
}
+ (id)createAppendParamWithRefreshCommentCnt:(unsigned int)arg1 isCustomAppendAll:(BOOL)arg2;
- (unsigned int)refreshCommentCount;
- (void)setRefreshCommentCount:(unsigned int)arg1;
- (BOOL)isCustomAppendAllData;
- (void)setIsCustomAppendAllData:(BOOL)arg1;
- (BOOL)unableSynchronizeBack;
- (void)setUnableSynchronizeBack:(BOOL)arg1;
@end

