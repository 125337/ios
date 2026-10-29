@interface WCNewClickStatPageData : MMObject
{
    unsigned int appearTimeStamp; // +0x8
    unsigned int disappearTimeStamp; // +0xc
    NSString * pageID; // +0x10
}
+ (id)pageData:(id)arg1 withAppearTimeStamp:(unsigned int)arg2 withDisappearTimeStamp:(unsigned int)arg3;
- (id)description;
- (id)pageID;
- (void)setPageID:(id)arg1;
- (unsigned int)appearTimeStamp;
- (void)setAppearTimeStamp:(unsigned int)arg1;
- (unsigned int)disappearTimeStamp;
- (void)setDisappearTimeStamp:(unsigned int)arg1;
- (void).cxx_destruct;
@end

