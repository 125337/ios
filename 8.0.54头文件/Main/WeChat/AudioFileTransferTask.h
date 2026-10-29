@interface AudioFileTransferTask : NSObject
{
    AudioFileTransferInfo * _info; // +0x8
}
- (id)initWithInfo:(id)arg1;
- (id)promiseTransferedFile;
- (id)info;
- (void)setInfo:(id)arg1;
- (void).cxx_destruct;
@end

