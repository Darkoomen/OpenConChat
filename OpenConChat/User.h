#pragma once

#include<string>

class User {
public:
	
	User(const std::string& login, const std::string& password, const std::string& name);
	~User();

	const std::string& getUserLogin() const;
	const std::string& getUserPassword() const;
	const std::string& getUserName() const;

	void setUserPassword(const std::string& password);
	void setUserName(const std::string& name);

private:
	const std::string _login;
	std::string _password;
	std::string _name;
};
