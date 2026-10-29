@interface MMTryCatchWrapper : NSObject
+ (id)runBlockWithTryCatch:(id /* block */)arg1;
+ (id)runWithConfig:(id)arg1 scheme:(id)arg2 schemeHandler:(id)arg3;
+ (id)runWithTask:(id)arg1 sessionTask:(id)arg2 error:(id)arg3;
+ (id)runWithTask:(id)arg1 didReceiveResponse:(id)arg2;
+ (id)runWithTask:(id)arg1 didReceiveData:(id)arg2;
@end
