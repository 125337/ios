@interface WCPayOverseaIBGGetWalletCgiCache : NSObject <PBCoding>
{
    BOOL _canSwitchWallet; // +0x8
    BOOL _isShowUserKeyInfo; // +0x9
    unsigned int _walletRegion; // +0xc
    WCPayOverseaWalletTitle * _walletTitle; // +0x10
    WCPayOverseaWalletNotice * _walletNotice; // +0x18
    WCPayOverseaGrayArea * _walletGrayArea; // +0x20
    WCPayOverseaThreePointArea * _walletThreePointArea; // +0x28
    NSString * _walletRegionDesc; // +0x30
    NSMutableArray * _walletRegionDescArray; // +0x38
    NSString * _userKeyInfoUrl; // +0x40
}
+ (void)PBArrayAdd_walletTitle;
+ (void)PBArrayAdd_walletNotice;
+ (void)PBArrayAdd_walletGrayArea;
+ (void)PBArrayAdd_walletThreePointArea;
+ (void)PBArrayAdd_walletRegion;
+ (void)PBArrayAdd_canSwitchWallet;
+ (void)PBArrayAdd_walletRegionDesc;
+ (void)PBArrayAdd_walletRegionDescArray;
+ (void)PBArrayAdd_isShowUserKeyInfo;
+ (void)PBArrayAdd_userKeyInfoUrl;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)walletTitle;
- (void)setWalletTitle:(id)arg1;
- (id)walletNotice;
- (void)setWalletNotice:(id)arg1;
- (id)walletGrayArea;
- (void)setWalletGrayArea:(id)arg1;
- (id)walletThreePointArea;
- (void)setWalletThreePointArea:(id)arg1;
- (unsigned int)walletRegion;
- (void)setWalletRegion:(unsigned int)arg1;
- (BOOL)canSwitchWallet;
- (void)setCanSwitchWallet:(BOOL)arg1;
- (id)walletRegionDesc;
- (void)setWalletRegionDesc:(id)arg1;
- (id)walletRegionDescArray;
- (void)setWalletRegionDescArray:(id)arg1;
- (BOOL)isShowUserKeyInfo;
- (void)setIsShowUserKeyInfo:(BOOL)arg1;
- (id)userKeyInfoUrl;
- (void)setUserKeyInfoUrl:(id)arg1;
- (void).cxx_destruct;
@end

