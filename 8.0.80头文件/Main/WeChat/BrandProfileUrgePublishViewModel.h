@interface BrandProfileUrgePublishViewModel : NSObject
{
    BOOL _hasMore; // +0x8
    BOOL _urgePublishNoticeClosed; // +0x9
    BOOL _loadingInfo; // +0xa
    BOOL _loadingMore; // +0xb
    unsigned int _count; // +0xc
    int _bizType; // +0x10
    NSArray * _userList; // +0x18
    NSString * _biz; // +0x20
    NSString * _bizUsername; // +0x28
    NSString * _profileTracePageId; // +0x30
    NSData * _buffer; // +0x38
}
+ (id)displayCountText:(unsigned int)arg1;
- (id)initWithBiz:(id)arg1 bizUsername:(id)arg2 bizType:(int)arg3;
- (void)loadInfoWithCompletion:(id /* block */)arg1;
- (void)loadUrgePublishNoticeSettingWithCompletion:(id /* block */)arg1;
- (void)fetchUrgePublishInfoWithCompletion:(id /* block */)arg1;
- (void)loadMoreWithCompletion:(id /* block */)arg1;
- (void)setUrgePublishNoticeClosed:(BOOL)arg1 completion:(id /* block */)arg2;
- (unsigned int)count;
- (void)setCount:(unsigned int)arg1;
- (id)userList;
- (void)setUserList:(id)arg1;
- (BOOL)hasMore;
- (void)setHasMore:(BOOL)arg1;
- (BOOL)urgePublishNoticeClosed;
- (void)setUrgePublishNoticeClosed:(BOOL)arg1;
- (id)biz;
- (void)setBiz:(id)arg1;
- (id)bizUsername;
- (void)setBizUsername:(id)arg1;
- (int)bizType;
- (void)setBizType:(int)arg1;
- (id)profileTracePageId;
- (void)setProfileTracePageId:(id)arg1;
- (id)buffer;
- (void)setBuffer:(id)arg1;
- (BOOL)loadingInfo;
- (void)setLoadingInfo:(BOOL)arg1;
- (BOOL)loadingMore;
- (void)setLoadingMore:(BOOL)arg1;
- (void).cxx_destruct;
@end
