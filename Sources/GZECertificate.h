//	--------------------------------------------------------------------------------------------------------------------
//
//  GZECertificate.h
//  APNSTest
//
//  Created by Gerd Van Zegbroeck on 16/11/10.
//  Copyright 2010 Managing Software. All rights reserved.
//
//	--------------------------------------------------------------------------------------------------------------------

#import <Foundation/Foundation.h>

//	--------------------------------------------------------------------------------------------------------------------
//	class GZECertificate
//	--------------------------------------------------------------------------------------------------------------------

@interface GZECertificate : NSObject 
{
	
@private
	
	NSString *name;
	
	SecIdentityRef identity;
}

//	--------------------------------------------------------------------------------------------------------------------
//	properties
//	--------------------------------------------------------------------------------------------------------------------

@property (readonly) NSString *name;

@property (readonly) SecIdentityRef identity;

//	--------------------------------------------------------------------------------------------------------------------
//	method prototypes
//	--------------------------------------------------------------------------------------------------------------------

+ (id)certificateWithName:(NSString *)aName withIdentity:(SecIdentityRef)aIdentity;

- (id)initCertificateWithName:(NSString *)aName withIdentity:(SecIdentityRef)aIdentity;

//	--------------------------------------------------------------------------------------------------------------------
//	done
//	--------------------------------------------------------------------------------------------------------------------

@end

//	--------------------------------------------------------------------------------------------------------------------