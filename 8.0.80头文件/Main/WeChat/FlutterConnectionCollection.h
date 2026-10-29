@interface FlutterConnectionCollection : NSObject
{
     counter; // +0x8
     connections; // +0x10
}
+ (long long)makeErrorConnectionWithErrorCode:(long long)arg1;
- (long long)acquireConnectionForChannel:(id)arg1;
- (id)cleanupConnectionWithID:(long long)arg1;
- (id)init;
- (void).cxx_destruct;
@end
