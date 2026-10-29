@interface CaraProphetPredictPositiveCallback : NSObject <CaraNativeProphetPredictPositiveCallbackBase>
{
    id /* block */ _block; // +0x8
}
- (id)initWithBlock:(id /* block */)arg1;
- (void)invoke:(id)arg1;
- (id)zidl;
- (id /* block */)block;
- (void).cxx_destruct;
@end

