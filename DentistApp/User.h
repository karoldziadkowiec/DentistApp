#pragma once

using namespace System;

public ref class User
{
public:
	int Id;
	String^ pesel;
	String^ name;
	String^ surname;
	String^ login;
	String^ password;
	String^ phone;
	String^ address;
};