@interface _TtC9WeAppCore20WAAfterLaunchHandler : NSObject
{
     delegate; // +0x8
     waitingResponse; // +0x10
     appId; // +0x18
     recommendDishBuffer; // +0x28
}
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)waitingResponse;
- (void)setWaitingResponse:(BOOL)arg1;
- (id)recommendDishBuffer;
- (void)setRecommendDishBuffer:(id)arg1;
- (id)initWithAppId:(id)arg1;
- (void)fetchData;
- (id)init;
- (void).cxx_destruct;
@end
