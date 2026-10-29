@interface QBWupTransfer : NSObject
{
    NSObject * _requestLock; // +0x8
    BOOL _haveRetryRequest; // +0x10
    BOOL _needEncrpyt; // +0x11
    NSMutableArray * _requests; // +0x18
}
- (id)init;
- (id)sendUniPackets:(id)arg1 completeHandle:(id /* block */)arg2;
- (id)sendUniPacket:(id)arg1 completeHandle:(id /* block */)arg2;
- (id)encodeRequestData:(id)arg1 encryptKey:(id)arg2;
- (id)decodeResponseData:(id)arg1;
- (void)addPostDataWithZipAndEncryption:(id)arg1 withData:(id)arg2 forServant:(id)arg3 withAESKey:(id)arg4;
- (id)uniPacketFromHttpResponseData:(id)arg1 withRequestHeaders:(id)arg2 withAESKey:(id)arg3;
- (void).cxx_destruct;
@end

