@interface QBrandPromotionGridModel : QGridModel
{
    id <QBrandPromotionGridModelDelegate> _delegate; // +0x8
    NSArray * _items; // +0x10
    long long _downloadStatus; // +0x18
    NSURLSessionDataTask * _task; // +0x20
    QBrandPromotionContext * _brandPromotionContext; // +0x28
    QPolyline * _polyline; // +0x30
}
- (void)downloadPromotionDataIfNeeded;
- (void)cancelRequest;
- (void)downloadPromotionData;
- (void)handleResponseData:(id)arg1;
- (void)handleResponseError:(id)arg1;
- (void)cancelRequestTask;
- (void)dealloc;
- (id)initWithScael:(unsigned int)arg1 x:(int)arg2 y:(int)arg3 context:(id)arg4;
- (id)createChildrenHavingItems;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (long long)downloadStatus;
- (void)setDownloadStatus:(long long)arg1;
- (id)task;
- (void)setTask:(id)arg1;
- (id)brandPromotionContext;
- (void)setBrandPromotionContext:(id)arg1;
- (id)polyline;
- (void)setPolyline:(id)arg1;
- (void).cxx_destruct;
@end
