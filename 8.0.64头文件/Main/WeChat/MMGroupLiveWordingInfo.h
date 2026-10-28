@interface MMGroupLiveWordingInfo : NSObject
{
    NSString * _wordingZhCN; // +0x8
    NSString * _wordingZhHK; // +0x10
    NSString * _wordingZhTW; // +0x18
    NSString * _wordingEN; // +0x20
}
- (id)initWithStartTipJson:(id)arg1;
- (id)currentWording;
- (id)wordingZhCN;
- (void)setWordingZhCN:(id)arg1;
- (id)wordingZhHK;
- (void)setWordingZhHK:(id)arg1;
- (id)wordingZhTW;
- (void)setWordingZhTW:(id)arg1;
- (id)wordingEN;
- (void)setWordingEN:(id)arg1;
- (void).cxx_destruct;
@end
