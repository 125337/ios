@interface XMailPrepareBindCgi : XMailBaseCgi
{
    id <XMailPrepareBindCgiDelegate> _delegate; // +0x8
}
- (id)init;
- (BOOL)startRequestWithDefaultMailAddr:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

