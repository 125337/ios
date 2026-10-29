@interface WCPayNetImageResource : NSObject <MMImageLoaderObserver>
{
    NSString * _m_url; // +0x8
    id /* block */ _m_block; // +0x10
    NSString * _m_cacheFolder; // +0x18
}
- (void)dealloc;
- (id)initWithUrl:(id)arg1 cacheFolder:(id)arg2;
- (void)startWithBlock:(id /* block */)arg1;
- (id)md5ForString:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (id)m_url;
- (void)setM_url:(id)arg1;
- (id /* block */)m_block;
- (void)setM_block:(id /* block */)arg1;
- (id)m_cacheFolder;
- (void)setM_cacheFolder:(id)arg1;
- (void).cxx_destruct;
@end

