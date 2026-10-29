@interface AsyncImageView : MMUIView <IHttpCacheExt>
{
    NSURLConnection * connection; // +0x8
    NSMutableData * m_data; // +0x10
    MMUIActivityIndicatorView * m_activityIndicator; // +0x18
    UIImageView * m_imageView; // +0x20
    long long m_contentMode; // +0x28
    id <AsyncImageViewDelegate> _delegate; // +0x30
    NSString * m_nsNotifyKey; // +0x38
    NSString * m_url; // +0x40
    BOOL m_showLoadingView; // +0x48
}
- (id)description;
- (void)setFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)loadImageFromHttpCacheMgr:(id)arg1 Type:(unsigned int)arg2 showLoadingView:(BOOL)arg3;
- (void)loadImageFromHttpCacheMgr:(id)arg1 Type:(unsigned int)arg2;
- (void)setImage:(id)arg1;
- (id)image;
- (id)m_url;
- (void)OnHttpGetFinish:(id)arg1 response:(id)arg2 ErrNo:(int)arg3 isWebp:(BOOL)arg4;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (long long)m_contentMode;
- (void)setM_contentMode:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)m_nsNotifyKey;
- (void)setM_nsNotifyKey:(id)arg1;
- (void).cxx_destruct;
@end

