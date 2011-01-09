/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSLock, NSArray;



@interface SSAccountStore : NSObject 
{
    NSArray *_accounts;
    NSLock *_lock;
}

@property(readonly) SSAccount *activeAccount;
@property(readonly) NSArray *accounts;
@property(getter=isExpired,readonly) BOOL expired;

+ (void)setDefaultStore:(id)arg1;
+ (void)resetExpiration;
+ (BOOL)isExpired;
+ (id)defaultStore;

- (id)accountWithUniqueIdentifier:(id)arg1 reloadIfNecessary:(BOOL)arg2;
- (BOOL)_reloadAccountsFromDaemon;
- (void)_postAccountStoreChanged;
- (void)_setAccounts:(id)arg1;
- (void)setAccountCreditsWithDictionary:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)resetExpiration;
- (id)addAccount:(id)arg1 asActiveAccount:(BOOL)arg2;
- (id)accounts;
- (id)accountWithUniqueIdentifier:(id)arg1;
- (BOOL)isExpired;
- (void)signOutAllAccounts;
- (id)activeAccount;

@end